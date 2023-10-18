#include "main.h"

/**
 *printf_characteers - main function name to print 3 special char
 *@format: parameter for set of format
 *
 *Return: return counter.
 */
int printf_characters(va_list args, const char* format)
{
	int count = 0; 
	int num = va_arg(args, int);

	while (*format != '\0') 
	{
		if (*format == '%') 
		{
			int plusFlag = 0;
			int spaceFlag = 0;
			int hashFlag = 0;
			format++;
			
			while (*format == '+' || *format == ' ' || *format == '#') 
			{
			if (*format == '+') 
			{
				plusFlag = 1;
			}
			else if (*format == ' ')
			{
				spaceFlag = 1;
			} 
			else if (*format == '#')			{
				hashFlag = 1;
			}
				format++;
			}
			switch (*format)
			{
			case 'd':
			{
			if (plusFlag && num >= 0)
			{
				putchar('+');
				count++;
			}
			else if (spaceFlag && num >= 0)
			{
				putchar(' ');
				count++;
			}
			else if (hashFlag && num >= 0)
			{
				putchar('#');
				count++;
			}
			printf("%d", num);
			count++;
			break;
		}
		case 's':
		{
		char* str = va_arg(args, char*);
			printf("%s", str);
			count += strlen(str);
			break;
		}
		default:
		putchar('%');
		count++;
		break;
		}
	}
	else
	{
		putchar(*format);
		count++;
	}
	format++;
	}
	va_end(args);
	return (count);
}
