#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

typedef struct format
{
	char *id;
	int (*func)();
} follow;

int print_hex(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_str(va_list val);
int _strlenconst(const char *str);
int _strlen(char *str);
int print_perct(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_octal(va_list val);
int print_HEX(va_list val);
int print_HEX_extra(unsigned int num);
int print_exc_str(va_list val);
int print_hex_upper(unsigned long int num);
int print_pointer(va_list val);
int print_revrs_str(va_list val);
int print_rot13(va_list val);

#endif
