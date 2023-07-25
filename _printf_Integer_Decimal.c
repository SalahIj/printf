#include "main.h"

/**
 * _printf_Integer_Decimal - printing
 * @ptr: the input.
 * Return: the result.
 */

int _printf_Integer_Decimal(va_list ptr)
{
	int num, div = 1, counter = 0, digit, num_div, p;

	num = va_arg(ptr, int);
	p = num;
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	for (num_div = num; num_div > 9; num_div /= 10)
	{
		div *= 10;
	}
	while (div > 0)
	{
		digit = num / div;
		_putchar('0' + digit);
		num %= div;
		div /= 10;
		counter++;
	}
	if (p >= 0)
		return (counter);
	else
		return (counter + 1);
}

