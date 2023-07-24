#include "main.h"

/**
 * end- function
 * @format: the input.
 * Return: the result.
*/

int end(const char *format)
{
	int i, s;

	s = _strlen(format);
	if (format[s - 1] == '%')
	{
		for (i = 0; i < s - 2; i++)
			_putchar(format[i]);

		return (1);
	}
	else
		return (0);
}
