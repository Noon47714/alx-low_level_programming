#include "main.h"

/**
 * _isupper - function that verifies if a  character upper
 * @c: char to be checked
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
