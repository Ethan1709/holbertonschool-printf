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
	long int num = va_arg(dgt, int);
	long int div = 1;
	long int tmp;
	long int res1;

	if (num < 0)
	{
		len += _putchar('-');
		num = -num;
	}
	if (num <= 9)
	{
		len += _putchar('0' + num);
	}
	if (num > 9)
	{	
		tmp = num;
		while (tmp > 9)
		{
			res1 = tmp / div;
			tmp = res1;
			div = div * 10;
		}
		len += _putchar('0' + tmp);
		while ((num % div) > 0)
		{
			len +=  _putchar('0' + (num * 10 / div));
			div /= 10;
		}
	}
	return (len);
}
