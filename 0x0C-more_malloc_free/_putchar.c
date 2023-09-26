#include "main.h"

/**
 * _putchar - write character c to stdout
 * @c: character
 * Return: 1 on success and -1 otherwis
 */
int _putchar(char c)
{
	return (fwrite(1, &c, 1));
}
