#include "main.h"

/**
 *print_revrs_string - function name to print string in reverse
 *@val: parameter take argument value
 *
 *Return: return value if j.
 */
int print_revrs_str(va_list val)
{
	char *c = va_arg(val, char*);
	int i;
	int j = 0;

	if (c == NULL)
		c = "(null)";
	while (c[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(c[i]);
	return (j);
}
