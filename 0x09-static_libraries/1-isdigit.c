#include "main.h"

/**
 * _isdigit - function that verifies if a  char is a digit or not.
 * *@c: char to be checked
 * Return: 0 or 1.
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
