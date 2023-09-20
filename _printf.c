#include "main.h"
/**
 * print - function that produces output according to a format
 * @format: character string
 * Return: character
 */
int printf(const char *format, ...)
{
	int i;
	va_list args;
	int output;

	output = 0;

	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')

			i++;
		if (format[i] == 'c' || format[i] == 'd' || format[i] == 's' || format[i] == 'i')
		{
			output += choose(format[i])(args);
		}
		else if (format[i] == '%')
		{
			output += _putchar('%');
		}
		else if
		{
			output += _putchar '%';
			continue;

		}
		else
			output += _putchar(format[i]);
	}
	va_end(args);
	return (output);
}
