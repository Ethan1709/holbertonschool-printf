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
	int  div = 1;
	int tmp;
	int res1;
	int i;

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
	{	
		tmp = num;
		while (tmp > 9)
		{
			res1 = tmp / div;
			tmp = res1;
			div = div * 10;
			i++;
		}
		_putchar(tmp);
	}
	return (len);
}
