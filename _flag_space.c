#include "main.h"

/**
 * _flag_space - flagging
 * @lettre: the first intput
 * @ptr: the second input.
 * Return: the result
*/

int _flag_space(char lettre, va_list ptr)
{
	int counter = 0, num;
	char tab[] = {'d', 'i'};
	va_list str;

	*str = *ptr;
	num = va_arg(str, int);
	if (lettre == tab[0] || lettre == tab[1])
	{
		if (num >= 0)
			counter += _putchar(' ');

		counter += _printf_Integer_Decimal(ptr);
	}
	return (counter);
}

