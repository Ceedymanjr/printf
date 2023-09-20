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
	va_start(args, format);

	int output;

	output = 0;

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
			output += select(format[i])(args);
		}
		else if (format[i] == '%')
		{
			output += _putchar('%');
		}
		else if
		{
			output += _putchar '%';
			output += _putchar(format[i]);
			continue;

		}
		else
		{
			output += _putchar(ormat[i]);
		}
	}
	va_end(args);
	return (output);
}
