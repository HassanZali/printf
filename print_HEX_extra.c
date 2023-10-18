#include "main.h"

/**
 *print_HEX_extra - function name to convert hex int
 *@num: parameter to take num
 *
 *Return: return counter.
 */
int print_HEX_extra(unsigned int num)
{
	int i, counter = 0;
	int *array;
	unsigned int rem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
	for (i = 0; i < counter; i++)
	{
		array[i] = rem % 16;
		rem = rem / 16;
	}
	for (i = counter - 1; i >= 0; i++)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
