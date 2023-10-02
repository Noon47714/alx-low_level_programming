
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>

#define BUF_SIZE 1024

void print_elf_header(const Elf64_Ehdr *header)
{
	printf("Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("Class:%s\n", header->e_ident[EI_CLASS]
			== ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:%s\n", header->e_ident[EI_DATA]
			== ELFDATA2LSB ? "2's complement, little endian" :
			"2's complement, big endian");
	printf("Version:%d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:%d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:%d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:%d\n", header->e_type);
	printf("Entry point address:0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	const char *filename = argv[1];
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error: could not open file '%s'\n", filename);
		exit(98);
	}
	Elf64_Ehdr header;
	ssize_t bytes_read = read(fd, &header, sizeof(header));

	if (bytes_read != sizeof(header))
	{
		fprintf(stderr, "Error: could not read ELF header
				from file '%s'\n", filename);
		exit(98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1]
			!= ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: file '%s' is not an ELF file\n", filename);
		exit(98);
	}
	print_elf_header(&header);
	close(fd);
	return (0);
}
