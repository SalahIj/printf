#ifndef MAIN_H
#define MAIN_H 

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(const char c);
int _printf_String(va_list ptr);
int _printf(const char *format, ...);
int _strlen(const char *s);
int _printf_Character(va_list ptr);
int _printf_Percent(void);

typedef struct Option
{
    char car;
    int (*f)();
} opt;

#endif