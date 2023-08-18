#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: the character to print 
 *
 * Return: on success 1
 * on error, -1 is retuened, and errno is est appropriately
 */
int _putcahr(char c)
{
	return (write(1, &c, 1));
}
