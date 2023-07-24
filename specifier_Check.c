#include "main.h"

/**
 * specifier_Check - checking specifier.
 * @cd: the first input.
 * @ptr: the second input.
 * Return: the result.
 */

int specifier_Check(char cd, va_list ptr)
{
	opt specifier[] = {{'c', _printf_Character}, {'s', _printf_String},
				{'%', _printf_Percent}};
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
