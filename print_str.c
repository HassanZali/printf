#include "main.h"

/**
 *printf_string - function name to print string
 *@val: function parameter for arguments
 *
 *Return: return length of string.
 */
int printf_str(va_list val)
{
	char *str;
	int length;
	int i;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
