#include "main.h"

/**
 * check_letters - checking letters
 * @cd: the input of the function.
 * Return: the result.
*/

int check_letters(char cd)
{
	char str[] = {'c', 's', '%', 'i', 'd'};
	unsigned int size, i, sum = 0;

	size = sizeof(str) / sizeof(str[0]);
	for (i = 0; i < size; i++)
	{
		if (cd != str[i])
			sum++;
	}
	if (sum == size)
	{
		_putchar('%');
		_putchar(cd);
		return (0);
	}
	else
		return (1);
}
