#include "main.h"
/**
 * *choose - function that choose the arguments
 * @str: character
 * Return: what ever pass
 */
int (*choose(char str))(va_list args)
{
	if (str == 'c')
	{
		return (&c_case);
	}
	else if (str == 'd')
	{
		return (&d_case);
	}
	else if (str == 's')
	{
		return (&s_case);
	}
	else if (str == 'i')
	{
		return (&i_case);
	}
	return (0);
}
