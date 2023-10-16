#include "main.h"

/**
 *_putchar - function name to write character c to stdout
 *@c: character parameter to print
 *
 *Return: return 1
 *on error, return -1 and erno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
