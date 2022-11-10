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
	int res;

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
	if (num > 9)
		res = num / div;
	do
	{
		div *= 10;
	} while (res > 9);
	_putchar(res);


	return (len);
}
