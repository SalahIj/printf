#include "main.h"

/**
 * _printf - the main function.
 * @format: the input of the function.
 * Return: the result.
*/

int _printf(const char *format, ...)
{
	opt specifier[] = {{'c', _printf_Character}, {'s', _printf_String},
		{'%', _printf_Percent}};
	int i = 0, counter = 0, j;
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
				for (j = 0; j < 3; j++)
				{
					if (format[i] == specifier[j].car)
					{
						counter = counter + specifier[j].f(ptr);
						break;
					}
				}
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
