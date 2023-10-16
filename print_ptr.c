#include "main.h"

/**
 *print_pointer - function name to print pointer value
 *@val: parameter to take arguments.
 *
 *Return: return pointer.
 */
int print_pointer(va_list val)
{
	int i, u;
	long int a;
	void *p;
	char *c = "(nil)";

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; c[i] != '\0'; i++)
			_putchar(c[i]);
		return (i);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	u = print_hex_upper(a);
	return (u + 2);
}
