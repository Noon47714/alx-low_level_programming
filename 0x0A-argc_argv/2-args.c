#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints all arguments
 * @argc: Number of line
 * @argv: Array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
