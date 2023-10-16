#include "main.h"

/**
 *_strlenconst - function name for constant string length
 *@str: parameter for string pointer
 *
 *Return: return i.
 */
int _strlenconst(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
/**
 *_strlen - function name for string length
 *@str: parameter for string pointer
 *
 *Return: return i.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
