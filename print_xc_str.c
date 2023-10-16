#include "main.h"

/**
 *print_exc_str - function name to print xclusive string
 *@val: parameter to take argument value
 *
 *Return: return len.
 */
int print_exc_str(va_list val)
{
	char *c;
	int i, len = 0;
	int value;

	c = va_arg(val, char *);
	if (c == NULL)
		c = "(null)";
	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] < 32 || c[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = c[i];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX_extra(value);
		}
		else
		{
			_putchar(c[i]);
			len++;
		}
	}
	return (len);
}
