#include "main.h"

/**
 * _convert_HEXADICIMAL_ord - converting
 * @n: the input.
 * Return: the result.
*/

long int _convert_HEXADICIMAL_ord(unsigned long int n)
{
	unsigned long int p, m, *array;
	long int b, i, j;

	p = n;
	m = p;
	for (i = 0; p != 0; i++, p = p / 16)
	;
	array = (unsigned long int *)malloc(sizeof(unsigned long int) * i);
	if (array == NULL)
		return (0);
	for (j = i - 1; j >= 0; j--, m /= 16)
		array[j] = m % 16;
	if (i == 1)
		_putchar(0 + '0');
	j++;
	while (j < i)
	{
		if (array[j] <= 9)
			_putchar(array[j] + '0');
		else
		{
			b = array[j] - 9;
			_putchar(b + 64);
		}
		j++;
	}
	free(array);
	return (i);
}

