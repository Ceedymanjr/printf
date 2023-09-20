#include "main.h"
/**
 * c_case - funnction that chck for c
 * @args: arguments
 * Return: character
 */
int c_case(va_list args)
{
	int out;

	char get_char = va_arg(args, int);

	out = _putchar(get_char);
	return (out);
}

/**
 * s_case - function that checks for s
 * @args: arguments
 * Return: character
 */
int s_case(va_list args)
{
	int out = 0;

	char *ptr = va_arg(args, char *);

	if (ptr == NULL)
	{
		ptr = "(nil)";
	}
	while (*ptr)
	{
		out + = _putchar(*ptr);
		ptr++;
	}
	return (out);
}

int i_case(va_list args)
{
	int out = 0;
	int x = v_arg(args, int);
	out = print_num 
}
