#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that print
 * format: any argument
 *
 * Return: 0 if succeed
 */
static int (*print_format (const char *format))(va_list)
{	
	int y = 0;

	print_f chars[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_modulo},
		{NULL, NULL},
	};

	for (; (chars[y]).c != NULL; y++)
	{
		if (*(chars[y].c) = *format)
			break;
	}
	return (chars[y].f);
}


int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	va_list args;
	char *d = "s";

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		while (chars[j].c != NULL && format[i] != *(chars[j].c))
			j++;

		if (chars[j].c != NULL)
		{
			_putchar(*d);
			chars[j].f(args);
		}
		i++;
		j = 0;
	}
	_putchar('\n');
	va_end(args);
	return (0);
}
