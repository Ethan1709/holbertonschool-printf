#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - prints string
 * @str: input (a string)
 *
 * Return: 0
 */

int print_string(va_list str)
{
	char *string = va_arg(str, char*);
	int i = 0;

	if (string == NULL)
		string = "(null)";

	while (string[i])
		_putchar(string[i++]);

	return (i);
}
