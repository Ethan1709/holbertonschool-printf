#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - print chars
 * @c: char
 * Return: 0
 */

int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
