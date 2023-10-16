#include "main.h"

/**
 *print_octal - function name to print inegers in octal
 *@val: parameter to take variable arguments
 *
 *Return: return counter.
 */
int print_octal(va_list val)
{
	int i, counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	int *array;
	unsigned int rem = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);

	for (i = 0; i < counter; i++)
	{
		array[i] = rem % 8;
		rem = rem / 8;
	}
	for (i = counter - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);
	return (counter);
}
