#include "main.h"
/**
 * _printf_Percent - print using _putchar
 * Return: result
*/
int _printf_Percent(va_list args)
{
char p = va_arg(args, int);
p = '%';
return (_putchar(p));
}
