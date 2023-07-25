#include "main.h"

/**
 * specifier_Check - check specifier letter
 * @cd: char
 * @ptr: va_list
 * Return: counter
*/

int specifier_Check(char cd, va_list ptr)
{
opt specifier[] = {{'c', _printf_Character}, {'s', _printf_String},
{'%', _printf_Percent}, {'d', _printf_Integer_Decimal},
{'i', _printf_Integer_Decimal}, {'b', _convert_Binary}};
int counter = 0;
unsigned int j;
for (j = 0; j < sizeof(specifier) / sizeof(specifier[0]); j++)
{
if (cd == specifier[j].car)
{
counter = specifier[j].f(ptr);
break;
}
}
return (counter);
}
