#include "main.h"

/**
 * _printf_convert_STRING - converting
 * @ptr: the input
 * Return: the result.
*/

int _printf_convert_STRING(va_list ptr)
{
	char *str;
	char tab[BAFFER_SIZE];
	int ind = 0, i, j;

	str = va_arg(ptr, char*);
	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			tab[ind] = '\\';
			tab[ind + 1] = 'x';
			tab[ind + 2] = str[i];
			ind = ind + 3;
		}
		else
		{
			tab[ind] = str[i];
			ind++;
		}
	}
	for (j = 0; j < ind; j++)
	{
		if ((tab[j] > 0 && tab[j] < 32) || tab[j] >= 127)
			_convert_HEXADICIMAL_ord(tab[j]);
		else
			_putchar(tab[j]);
	}
	return (ind);
}
