#include "main.h"

/**
 *print_bin - function name to print binary integers
 *@val: parameter to take in arguments
 *
 *Return: return integer.
 */
int print_bin(va_list val)
{
	int cont = 0;
	int flag = 0;
	int i, a = 1, z;
	unsigned int num = va_arg(val,  unsigned int);
	unsigned int u;

	for (i = 0; i < 32; i++)
	{
		u = ((a << (32 - i)) & num);
		if (u >> (31 - i))
			flag = 1;
		if (flag)
		{
			z = u >> (31 - i);
			_putchar(z + '0');
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);

}
