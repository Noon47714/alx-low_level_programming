#include "main.h"

/**
 * get_bit - get the value of a bit
 * @index: index starting from 0
 * @n: the number
 * Return: The converted value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
