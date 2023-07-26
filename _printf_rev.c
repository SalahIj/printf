#include "main.h"
/**
 * _printf_rev - printf in reverse
 * @ptr: input
 * Return: lenght of string
*/
int _printf_rev(va_list ptr)
{
int i = 0;
int j;
int len = 0;

char *str = va_arg(ptr, char*);
if (str == NULL)
{
str = "nill";
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
return (0);
}
while (str[i] != '\0')
{
len++;
i++;
}
for (j = len - 1 ; j >= 0 ; j--)
{
_putchar(str[j]);
}
return (len);
}
