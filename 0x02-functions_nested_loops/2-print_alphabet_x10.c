#include "main.h"

/**
 * print_alphabet_×10 - function that print the alphabet 10 time
 *
 */
void print_alphabet_×10(void)
{
	int line, ch;

	for (line = 0; line <= 10; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
