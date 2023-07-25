#include "main.h"

/**
 * *_strlen - calculting the lenght
 * @s: the input of the function.
 * Return: the result.
*/
int _strlen(const char *s)
{
	int i;
	i = 0;
	while(*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_putchar - printing characters.
 * @c: the input of the function.
 * Return: the result.
*/

int _putchar(const char c)
{
	return (write(1, &c, 1));
}
