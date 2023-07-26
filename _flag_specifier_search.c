#include "main.h"

/**
 * _flag_specifier_search - flagging
 * @flag: the first input.
 * @letter: the second input.
 * Return: the result.
*/

int _flag_specifier_search(char flag, char letter)
{
	int p = 7, q = 3, i, j;
	char flagg[3] = {'+', ' ', '#'};
	char tab[7] = {'d', 'i', ' ', 'p', 'o', 'x', 'X'};

	for (j = 0; j < 3; j++)
	{
		if (flag == flagg[j])
		{
			q--;
			break;
		}
	}
	for (i = 0; i < 7; i++)
	{
		if (letter == tab[i])
		{
			p--;
			break;
		}
	}
	if ((p == 7 || q == 3) || ((j == 0 || j == 1) && j > 2))
		return (1);
	if ((j == 3 && j < 3))
		return (1);
	else
		return (0);
}
