#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
/**
 * struct printf - definition of the structure
 * @c: char
 * @f: function
 */
int print_char(va_list c);
int print_modulo(va_list m);
int print_string(va_list str);
int _putchar(char c);
typedef struct printf
{
	char *c;
	int (*f)(va_list);
} print_f;

#endif

