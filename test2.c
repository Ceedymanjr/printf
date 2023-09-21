#include "main.h"
/**
 * c_case - funnction that chck for c
 * @args: arguments
 * Return: printed character
 */
int c_case(va_list args)
{
	int out;

	char get_char = va_arg(args, int);

	out = _putchar(get_char);
	return (out);
}

/**
 * s_case - function that checks for the s
 * @args: arguments
 * Return: printed string
 */
int s_case(va_list args)
{
	int out = 0;

	char *ptr = va_arg(args, char *);

	if (ptr == NULL)
	{
		ptr = "(null)";
	}
	while (*ptr)
	{
		out += _putchar(*ptr);
		ptr++;
	}
	return (out);
}
/**
 * i_case - function that checks for i
 * @args: arguments
 * Return: printed number
 */
int i_case(va_list args)
{
	int out = 0;

	int x = va_arg(args, int);

	out = print_dg(x, 0);
	return (out);
}
/**
 * d_case - function that checks for d
 * @args: arguments
 * Return: printed number
 */
int d_case(va_list args)
{
	int out = 0;
	int x = va_arg(args, int);

	out = print_dg(x, 0);
	return (out);
}
