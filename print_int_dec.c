#include "main.h"

/**
 *print_int - function name to print integers
 *@args: parameter to take in arguments
 *
 *Return: return integers printed.
 */
int print_int(va_list args)
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
/**
 *print_dec - function name to print dec number
 *@args: parameter for arguments
 *
 *Return: return characters printed.
 */
int print_dec(va_list args)
{
	int i = 1;
	int n = va_arg(args, int);
	int num = 0, last = n % 10, digit, exp = 1;

	n = n / 10;

	if (last < 0)
	{
		_putchar('_');
		num = num;
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
