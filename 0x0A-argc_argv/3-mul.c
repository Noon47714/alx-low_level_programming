#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Program that takes first two integer arguments
 * @argc: Number of line
 * @argv: Array name
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;
		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}
	return (0);
}
