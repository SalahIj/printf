#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(const char c);
int _printf_String(va_list ptr);
int _printf(const char *format, ...);
int _strlen(const char *s);
int _printf_Character(va_list ptr);
int _printf_Percent(void);
int specifier_Check(char cd, va_list ptr);
int check_letters(char cd);
int _printf_Integer_Decimal(va_list args);
int _printf_Digits(int n);

typedef struct Option
{
    char car;
    int (*f)();
} opt;

#endif
