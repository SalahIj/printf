#include "main.h"
/**
 * _convert_Octal - convert to octal
 * @ptr: input
 * Return: lenght
*/
int _convert_Octal(va_list ptr)
{
int *array, i, k;
unsigned int p, m;
p = va_arg(ptr, unsigned int);
m = p;
for (i = 0; p != 0; i++)
p = p / 8;
array = (int *)malloc(sizeof(int) * i);
if (array == NULL)
return (0);
for (k = i - 1; k >= 0; k--, m /= 8)
array[k] = m % 8;
k++;
while (k < i)
{
_putchar(array[k] + '0');
k++;
}
free(array);
return (i);
}
