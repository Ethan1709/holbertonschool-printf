#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <_putchar.c>

int _printf(const char *format, ...);
/**
 * struct printf - definition of the structure
 * @c: char
 * @f: function
 */

typedef struct printf
{
	char *c;
	int (*f)(va_list args);
} print_f;
#endif

