#include "main.h"

/**
 * print_digit - function that print a digit
 * @dgt: entry point : a digit
 *
 * Return: i the length
 */

int print_digit (va_list dgt)
{
	int len = 0;
	int num = va_arg(dgt, int);
	int div  = 1;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num <= 9)
	{
		_putchar(num);
		len += 1;
	}
	while ((num / div) > 9)
		div *= 10;
	while (div != 0)
	{
		len += _putchar('0' + (num / div));
		num %=  div;
		div /= 10;
	}
	return (len);
}
