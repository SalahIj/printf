#include "main.h"

/**
 * _printf - the main function.
 * @format: the input of the function.
 * Return: the result.
*/

int _printf(const char *format, ...)
{
	int i = 0, counter = 0;
	va_list ptr;

	va_start(ptr, format);
	if (!format || (format[0] == '%' && (!format[1] || format[1] == ' ')))
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] != 'c' && format[i] != 's' && format[i] != '%')
			{
				counter += _putchar(format[i - 1]);
				counter += _putchar(format[i]);
			}
			else
			{
				counter += specifier_Check(format[i], ptr);
			}
		}
		else
		{
			_putchar(format[i]);
			counter++;
		}
		i++;
	}
	return (counter);
}
