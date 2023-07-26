#include "main.h"
/**
 * rot13_char - letter by 13
 * @c: char
 * Return: char by 13
*/
char rot13_char(char c)
{
if ('a' <= c && c <= 'z')
{
return (((c - 'a' + 13) % 26) + 'a');
}
else if ('A' <= c && c <= 'Z')
{
return (((c - 'A' + 13) % 26) + 'A');
}
return (c);
}
/**
 * _printf_rot13 - string by 13
 * @ptr: string
 * Return: retun string by 13
*/
int _printf_rot13(va_list ptr)
{
int i = 0;
int count = 0;

char *str = va_arg(ptr, char*);
if (str == NULL)
{
str = "nill";
for (i = 0 ; str[i] != '\0' ; i++)
{
_putchar((str[i]));
}
return (1);
}
for (i = 0; str[i] != '\0'; i++)
{
_putchar(rot13_char(str[i]));
count++;
}
return (count + 1);
}
