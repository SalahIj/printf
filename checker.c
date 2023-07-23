#include "main.h"

/**
 * checker - checking the number of percent.
 * @format: the input of the function.
 * Return: the result.
*/

int checker(const char *format)
{
	opt specifier[] = {{'c', _printf_Character}, {'s', _printf_String},
			{'%', _printf_Percent},	{'i', _printf_Integer_Decimal},
			{'d', _printf_Integer_Decimal}};
	int  nb_perce = 0, nb_specif = 0, k;
	unsigned int j;

	for (k = 0; format[k]; k++)
	{
		if (format[k] == '%' && format[k + 1] != '%')
			nb_perce++;
		else if (format[k] == '%' && format[k + 1] == '%')
		{
			k = k + 2;
			nb_perce++;
		}
	}
	for (k = 0; format[k]; k++)
	{
		if (format[k] == '%')
		{
			k++;
			for (j = 0; j < sizeof(specifier) / sizeof(specifier[0]); j++)
			{
				if (format[k] == specifier[j].car)
					nb_specif++;
			}
		}
	}
	if (nb_perce != nb_specif)
		return (-1);
	else
		return (1);
}
