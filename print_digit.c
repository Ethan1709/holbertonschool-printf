#include "main.h"

/**
 * print_digit - function that print a digit
 * @dgt: entry point : a digit
 *
 * Return: i the length
 */

int print_digit (va_list dgt)
{
	long int len = 0;
	long int num = va_arg(dgt, int);
	long int div;
	long int tmp;
	long int num1;
	

	if (num < 0)
	{
		len = len + 1;
		_putchar('-');
		num = -num;
	}
	if (num <= 9)
	{
		len = len + 1;
		_putchar('0' + num);
	}
	while (num > 9)
	{	
		tmp = num;
		div = 1;
		while ((tmp / div) > 9)
		{
			div = div * 10;
		}
		tmp = tmp / div;
		len = len + 1;
		_putchar('0' + tmp);
		num = num - (tmp * div);
		if (num <= 9)
			num1 = num;
	}
	_putchar('0' + num1);
	len = len + 1;
	return (len);
}
