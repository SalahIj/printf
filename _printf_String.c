#include "main.h"
/**
 * _printf_String - print a string
 * @ptr: pointer to a string
 * Return: pointer
*/
int _printf_String(va_list ptr)
{
char *srt = va_arg(ptr, char*);
int a;
if (*srt)
{
a = write(1, srt, _strlen(srt));
}
return (a);
}
