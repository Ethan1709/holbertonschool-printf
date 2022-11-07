#include <main.h>
#include <stdio.h>
#include <stdarg.>

/**
 * print_string - prints string
 * @str: input (a string)
 *
 * Return: 0
 */

int print_string(va_list str)
{
	_putchar(va_arg(str, char));

	return (0);
}
