#include "main.h"

/**
 *printf_char - function name to print a character
 *@val: function parameter for arguments
 *
 *Return: return 1.
 */
int printf_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
