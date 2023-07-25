#include "main.h"

/**
 * _printf_Digits - printing numbers.
 * @n: the input.
 * Return: the result.
 */

int _printf_Digits(int n)
{
	int ind = 0, p;
	int num, num_div, div = 1;

	num = n;
	for (num_div = num; num_div > 9; num_div /= 10)
	{
		div *= 10;
		ind++;
	}
	p = n;
	if (p != 0)
	{
		_printf_Digits(p / 10);
		_putchar('0' + (p % 10));
		p = p / 10;
	}
	return (ind + 1);
}

/**
 * _printf_Integer_Decimal - printing numbers
 * @args: the input.
 * Return: the result.
 */

int _printf_Integer_Decimal(va_list args)
{
	int p = va_arg(args, int);
	int pt, num, k = 0;

	num = p;
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == INT_MIN)
	{
		_putchar('2');
		num %= 1000000000;
		num = -num;
		k = 1;
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	pt = _printf_Digits(num);
	if (p > 0)
		return (pt);
	else if (k == 1)
		return (pt + 2);
	else
		return (pt + 1);
}

