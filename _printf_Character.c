#include "main.h"

/**
 * _printf_Character - printing characters
 * @ptr: the input of the function
 * Return: the result.
*/

int _printf_Character(va_list ptr)
{
	char c;

	c = (char)va_arg(ptr, int);
	return (_putchar(c));
}
