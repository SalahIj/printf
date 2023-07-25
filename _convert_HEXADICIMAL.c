#include "main.h"

/**
 * _convert_HEXADICIMAL - converting numbers
 * @ptr: the input
 * Return: the result.
*/

int _convert_HEXADICIMAL(va_list ptr)
{
	int i, j;
	unsigned int p, m, *array, b;

	p = va_arg(ptr, unsigned int);
	m = p;
	for (i = 0; p != 0; i++, p = p / 16)
	;
	array = (unsigned int *)malloc(sizeof(unsigned int) * i);
	if (array == NULL)
		return (0);
	for (j = i - 1; j >= 0; j--, m /= 16)
		array[j] = m % 16;

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
