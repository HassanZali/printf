#include "main.h"

/**
*handle_zero_flag - function name to print zero flag
*@value: parameter for value
*@width: parmeter to take width
*
*Return: return 0.
*/
int handle_zero_flag(int value, int width) 
{
	char value_str[12];
	int original_length = strlen(value_str);        int zeros_to_pad = width - original_length;
	sprintf(value_str, "%d", value);
 
	if (zeros_to_pad > 0)
	{
		char padded_value_str[12]; 
		memset(padded_value_str, '0', zeros_to_pad);
		strcpy(padded_value_str + zeros_to_pad, value_str); 
		printf("%s\n", padded_value_str);
	} 
	else
	{
		printf("%s\n", value_str);
	}
	return 0;
}
