#include "main.h"

/**
 * _flag_specifier_indice -  searching
 * @letter: the first input
 * @ptr: the third
 * @flag: the second
 * Return: the result
*/

int _flag_specifier_indice(char flag, char letter, va_list ptr)
{
	int counter = 0, i, ind = 0;
	char flagg[3] = {'+', ' ', '#'};
	int (*g[])(char, va_list) = {_flag_plus, _flag_space, _flag_dieze};

	for (i = 0; i < 6; i++)
	{
		if (flag == flagg[i])
		{
			ind = i;
			break;
		}
	}
	counter += g[ind](letter, ptr);
	return (counter);
}
