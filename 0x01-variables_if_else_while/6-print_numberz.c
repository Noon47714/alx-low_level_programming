#include <stdio.h>

/**
 * main - prints single digits in bace 10
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
