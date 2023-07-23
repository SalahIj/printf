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
	int i = 0, counter = 0;
	unsigned int j;
	va_list ptr;

	va_start(ptr, format);
	if (!format||(format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	if(format[0] == '\0')
	return (1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (j < sizeof(specifier) / sizeof(specifier[0]))
			{
				if (format[i] == specifier[j].car)
				{
					specifier[j].f(ptr);
					counter++;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			counter++;
		}
		i++;
	}
	va_end(ptr);
	return (counter);
}
