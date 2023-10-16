#include "main.h"

/**
 *_printf - function name to copy printf
 *@format: parameter for function identifier
 *
 *Return: return integer.
 */
int _printf(const char *format, ...)
{
	follow func[] = {
		{"%c", printf_char},
		{"%s", printf_str},
		{"%%", print_perct},
		{"%d", print_dec},
		{"%i", print_int},
		{"%r", print_revrs_str},
		{"%R", print_rot13},
		{"%b", print_bin},
		{"%u", print_unsigned},
		{"%o", print_octal},
		{"%x", print_hex},
		{"%X", print_HEX},
		{"%S", print_exc_str},
		{"%p", print_pointer},
	};
	
	va_list args;
	int i = 0, len = 0;
	int u;
	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-2);

Here:
	while (format[i] != '\0')
	{
	u = 13;
	while (u >= 0)
	{
		if (func[u].id[0] == format[i] && func[u].id[1] == format [i + 1])
		{
			len = len + func[u].func(args);
			i = i + 2;
			goto Here;
		}
		u--;
	}
	_putchar(format[i]);
	i++;
	len++;
	}
	va_end(args);
	return (len);
}
