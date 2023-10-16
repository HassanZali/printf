#include "main.h"

/**
 *print_hex - function name to convert numbers in hex
 *@val: parameter to take value
 *
 *Return: return counter.
 */
int print_hex(va_list val)
{
	int i, counter = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned);
	unsigned int rem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) *counter);
	for (i = 0; i < counter; i++)
	{
		array[i] = rem % 16;
		rem = rem / 16;
	}
	for (i = counter - 1; i >= 0; i++)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
