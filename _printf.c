#include "_putchar.c"
#include <stdarg.c>

/**
 * _printf - function that print
 * format: any argument
 *
 * Return: 0 if succeed
 */
int _printf(const char *format, ...)
{
	print_f chars[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_modulo},
		{NULL, NULL},
	};
	int i = 0;
	int j = 0;
	va_list args;
	char *d = "";

	va_start(args, format);
	while (format != NULL && format[i] '\0')
	{
		while (chars[j].c != NULL && format[i] != *(chars[j].c))
			j++;
		if (chars[j].c != NULL)
		{
			_putchar(d);
			chars[j].f(args);
		}
		i++;
		j = 0;
	}
	_putchar('\n');
	va_end(args);
}
