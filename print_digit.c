#include "main.h"

/**
 * print_digit - function that print a digit
 * @dgt: entry point : a digit
 *
 * Return: i the length
 */

int print_digit (va_list dgt)
{
	int i = 0;
	int len = 0;
	int div = 1, res;
	int num = va_arg(dgt, int);
	int tmp, m;

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
	while (num > 9)
	{
		res = num / div;
		while (res > 9)
		{
			div *= 10;
			i++;
		}
		_putchar(res);
		len += 1;

		for (; i > 0; i--)
		{
			m = res * div;
			tmp = (num - m) / (div / (10 * i));
			_putchar(tmp);
		}
	}
	return (len);
}
