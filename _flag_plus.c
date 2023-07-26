#include "main.h"

/**
 * _flag_plus - plus flag
 * @letter: the first input
 * @ptr: the second input.
 * Return: the result.
*/

int _flag_plus(char letter, va_list ptr)
{
	int i, counter = 0, num;
	char tab[] = {'d', 'i', 'p'};
	int (*h[])(va_list) = {_printf_Integer_Decimal, _printf_Integer_Decimal,
		_printf_Pointer};
	va_list str;

	*str = *ptr;
	num = va_arg(str, int);
	for (i = 0; i < 3; i++)
	{
		if (letter == tab[i])
			break;
	}
	if (num >= 0)
		counter += _putchar('+');

	counter += h[i](ptr);
	return (counter);
}

