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
}
