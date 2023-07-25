#include "main.h"

/**
 * _printf_Pointer - printing
 * @ptr: the input.
 * Return: the result.
*/

int _printf_Pointer(va_list ptr)
{
	void *pointer;
	char *str = "(null)";
	long int counter = 0;
	unsigned long int pt;

	pointer = va_arg(ptr, void*);
	if (pointer == NULL)
	{
		write(1, str, 6);
		return (6);
	}
	else
	{
		pt = (unsigned long int)pointer;
		counter += _putchar('0');
		counter += _putchar('x');
		counter += _convert_Hexadicimal_ord(pt);
	}
	return (counter);
}
