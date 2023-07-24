#include "main.h"

/**
 * _printf - the main function.
 * @format: the input of the function.
 * Return: the result.
*/

int _printf(const char *format, ...)
{
	opt spec[] = {{"%c", _printf_Character}, {"%s", _printf_String},
			{"%%", _printf_Percent}};
	int i = 0, counter = 0;
	unsigned int j;
	va_list ptr;

	va_start(ptr, format);
	if (!format || (format[0] == '%' && (!format[1] || format[1] == ' ')))
		return (-1);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		j = 0;
		while (j < 3)
		{
			if (format[i] == spec[j].car[0] && format[i + 1] == spec[j].car[1])
			{
				counter = counter + spec[j].f(ptr);
				i = i + 2;
				break;
			}
			j++;
		}
		_putchar(format[i]);
		counter++;
		i++;
	}
	return (counter);
}
