#include "main.h"
/**
 * _convert_Binary - convert to binary
 * @ptr: num
 * Return: lenght
*/
int _convert_Binary(va_list ptr)
{
int *array, i, k;
unsigned int p, m;
p = va_arg(ptr, unsigned int);
m = p;
for (i = 0; p != 0; i++, p = p / 2)
;
array = (int *)malloc(sizeof(int) * i);
if (array == NULL)
return (0);
for (k = i - 1; k >= 0; k--)
{
if (m % 2 != 0)
array[k] = 1;
else
array[k] = 0;
m = m / 2;
}
k++;
while (k < i)
{
_putchar(array[k] + '0');
k++;
}
free(array);
return (i);
}
