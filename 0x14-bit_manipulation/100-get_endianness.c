#include "main.h"

/**
 * get_endianness - checks whether a machine
 * Return: 1 or 0.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endian = (char *)&num;

	if (*endian)
		return (1);
	return (0);
}
