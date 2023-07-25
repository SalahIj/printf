#include "main.h"
/**
 * _printf_Digits - printf digit
 * @n: num
 * Return: integer
*/
int _printf_Digits(int n)
{
int ind = 0;
int num, num_div, div = 1;
num = n;
for (num_div = num; num_div > 9; num_div /= 10)
{
div *= 10;
ind++;
}
if (n != 0)
{
_printf_Digits(n / 10);
_putchar('0' + (n % 10));
}
return (ind + 1);
}
/**
 * _printf_Integer_Decimal - printf Integer
 * @args: va_list
 * Return: return lenght of num
*/
int _printf_Integer_Decimal(va_list args)
{
int p = va_arg(args, int);
int pt, p;
num = p;
if (num < 0)
{
_putchar('-');
num = -num;
}
if (num == 0)
{
_putchar('0');
return (1);
}
pt = _printf_Digits(num);
if (p > 0)
return (pt);
else
return (pt + 1);
}
