#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define BAFFER_SIZE 1024

int _putchar(const char c);
int _printf_String(va_list ptr);
int _printf(const char *format, ...);
int _strlen(const char *s);
int _printf_Character(va_list ptr);
int _printf_Percent(void);
int _printf_Integer_Decimal(va_list args);
int _printf_Digits(int n);
int specifier_Check(char cd, va_list ptr);
int check_letters(char cd);
int _convert_Binary(va_list ptr);
int _printf_Unsigned_D_I(va_list ptr);
int _convert_HEXADICIMAL(va_list ptr);
int _convert_Hexadicimal(va_list ptr);
int _convert_Octal(va_list ptr);
long int _convert_HEXADICIMAL_ord(unsigned long int n);
int _printf_convert_STRING(va_list ptr);
long int _convert_Hexadicimal_ord(unsigned long int n);
int _printf_Pointer(va_list ptr);
int _printf_rot13(va_list *str);

/**
 * struct Option - comment
 * @car: the first
 * @f: the second
 * Description: description
*/
typedef struct Option
{
	char car;
	int (*f)();
} opt;

#endif
