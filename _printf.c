#include <stdarg.h>
#include "main.h"

/**
 * print_format - structure of characters
 * @format: any argument
 *
 * Return: the right function
 */

static int (*print_format(const char *format, ...))(va_list)
{
	int y = 0;

	print_f chars[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL},
	};

	for (; chars[y].c != NULL; y++)
	{
		if (*(chars[y].c) == *format)
			break;
	}
	return (*(chars[y].f));
}

/**
 * _printf - main function 
 * @format: the characters entered by the user
 * Return: the good output of the function
 */

int _printf(const char *format, ...)
{
	int i;
	int (*k)(va_list);
	int len;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			k = print_format(&format[i + 1]);
			if (k != NULL)
				len += k(args);
			if (k == NULL && format[i + 1] != '%')
			{
				_putchar(format[i]);
				_putchar (format[i + 1]);
				len += 2;
			}
			i = i + 1;
			if (format[i] == '%')
			{
				_putchar(format[i]);
				len += 1;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	va_end(args);
	return (len);
}
