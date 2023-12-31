#include "main.h"

/**
*print_unsigned - function name to print integers
*@args: parameter to take in arguments
*
*Return: return integers printed.
*/
int print_unsigned(va_list args)
{
	int i = 1;
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('_');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
