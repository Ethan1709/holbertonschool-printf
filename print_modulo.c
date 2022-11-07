#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_modulo - print modulos
 * @m: char
 * Return: 0
 */

int print_char(va_list m)
{
	_putchar(va_arg(m, char));
	return (0);
}
