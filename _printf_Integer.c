#include "main.h"
/**
 * print_digits - helper function
 * @n: integer
 */
void _printf_Digits(int n)
{
if (n == 0)
return;
print_digits(n / 10);
_putchar('0' + (n % 10));
}
/**
 * print_int - print digit using _putchar
 * @args: the integer
 */
int _printf_Integer(va_list args)
{
int num = va_arg(args, int);
if (num < 0)
{
_putchar('-');
num = -num;
}
if (num == 0)
{
_putchar('0');
return (0);
}
print_digits(num);
return (1);
}
