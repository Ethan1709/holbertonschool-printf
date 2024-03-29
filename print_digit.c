#include "main.h"
#include <limits.h>

/**
 * recursive_print - function that prints a digit
 * @num: entry point : a digit
 *
 * Return: Always 1
 */

int recursive_print (int num)
{
	for (; num < 0;)
	{
		if (num == INT_MIN)
			break;
		_putchar('-');
		num = -num;
	}

	if (num / 10)
	{
		recursive_print(num / 10);

	}
	if (num % 10 + '0' != '(')
		_putchar(num % 10 + '0');
	else
		_putchar('8');
	return (1);
}

/**
 * print_digit - function that calls another & returns len
 * @dgt: entry point for a number value
 *
 * Return: lenght
 */


int print_digit(va_list dgt)
{
	long int len = 0;
	long int div = 1;
	long int num = va_arg(dgt, int);

	recursive_print(num);

	if (num < 0)
	{
		len++;
		num = -num;
	}
	if (num == 0)
		len = 1;

	while ((num / div) > 0)
	{
		div = div * 10;
		len++;
	}
	return (len);
}
