#include "main.h"

/**
 * _flag_dieze - flagging
 * @lettre: the first input.
 * @ptr: the second input.
 * Return: the result.
*/

int _flag_dieze(char lettre, va_list ptr)
{
	int counter = 0, i;
	char tab[] = {'o', 'x', 'X'};
	int (*h[])(va_list) = {_convert_Octal, _convert_Hexadicimal,
		_convert_HEXADICIMAL};

	for (i = 0; i < 3; i++)
	{
		if (lettre == tab[i])
			break;
	}
	if (lettre == 'o')
		counter += _putchar('0');
	else if (lettre == 'x')
	{
		counter += _putchar('0');
		counter += _putchar('x');
	}
	else
	{
		counter += _putchar('0');
		counter += _putchar('X');
	}
	counter += h[i](ptr);
	return (counter);
}
