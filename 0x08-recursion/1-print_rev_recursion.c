#include "main.h"

/**
 * _print_rev_recursion - print string in revers
 * @s: pointer to string
 * Return: void
 */

void _print_rev_recursion(char *s);
{

	if (*s > '\0')
	{
		_print_rev_recursio(s + 1);
		_putchar(*s);
	}
}