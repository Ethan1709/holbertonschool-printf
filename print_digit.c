#include "main.h"

/**
 * print_digit - function that print a digit
 * @dgt: entry point : a digit
 *
 * Return: len the length
 */

int print_digit(va_list dgt)
{
	long int len = 0;
	long int num = va_arg(dgt, int);
	long int div = 1;
	long int tmp = num / div;

	if (num < 0) /*check if negative*/
	{
		len = len + 2;
		_putchar('-');
		num = -num;
		tmp = -tmp;
	}
	if (num == 0) /*check if null*/
	{
		len = len + 1;
		_putchar('0' + num);
	}
	while (tmp > 9) /*loop to count length*/
	{
		div = div * 10;
		len++;
	}
	for (; div != 0 ;) /*loop to print*/
	{
		tmp = num / div;
		_putchar('0' + tmp);
		num = num % div;
		div = div / 10;
	}
	return (len);
}
