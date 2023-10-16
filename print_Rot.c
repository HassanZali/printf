#include "main.h"

/**
 *
 *
 *
 *
 *
 */
int print_rot13(va_list val)
{
	int u = 0;
	int i, z, counter = 0;
	char *c = va_arg(val, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};

	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (c == NULL)
		c = "(null)";
	for (i = 0; c[i]; i++)
	{
		u = 0;
		for (z = 0; a[z] && !u; z++)
		{
			if (c[i] == a[z])
			{
				_putchar(b[z]);
				counter++;
				u = 1;
			}
		}
		if (!u)
		{
			_putchar(c[i]);
			counter++;
		}
	}
	return (counter);
}
