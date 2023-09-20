#include "main.h"
/**
 * print_dg - function that print digit
 * @num: number to be printed
 * @out: function parameter
 * Return: number
 */
int print_dg(long num, int out)
{
	if (num < 0)
	{
		_putchar('-');
		out++;
		num = num * -1;
	}
	if (num / 10)
	{
		out = print_dg(num / 10, out);
	}
	_putchar(num % 10 + '0');
	return (out - 1);
}
