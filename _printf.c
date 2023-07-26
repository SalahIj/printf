#include "main.h"

/**
 * _printf - the main function.
 * @format: the input of the function.
 * Return: the result.
*/
int _printf(const char *format, ...)
{
	int i = 0, counter = 0, k;
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
			if (_flag_specifier_search(format[i], format[i + 1]) == 0)
			{
				if (format[i + 1] == ' ')
				{
					for (k = i + 1; format[k] != ' '; k++)
					;
					counter += _flag_specifier_indice(format[i], format[k + 1], ptr);
					i = i + (k - i + 1);
				}
				else
				{
					counter += _flag_specifier_indice(format[i], format[i + 1], ptr);
					i++;
				}
			}
			if (check_letters(format[i]) == 0)
				counter += 2;
			else
				counter += specifier_Check(format[i], ptr);
		}
		else
			counter += _putchar(format[i]);
		i++;
	}
	return (counter);
}
