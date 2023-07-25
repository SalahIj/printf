#include "main.h"

/**
 * _printf_Unsigned_D_I - printing
 * @ptr: the input
 * Return: the result
*/

int _printf_Unsigned_D_I(va_list ptr)
{
	unsigned int num, digit, num_div;
	int div = 1, counter = 0;

	num = va_arg(ptr, int);
	for (num_div = num; num_div > 9; num_div /= 10)
		div *= 10;

	while (div > 0)
	{
		digit = num / div;
		_putchar('0' + digit);
		num %= div;
		div /= 10;
		counter++;
	}
	return (counter);
}
