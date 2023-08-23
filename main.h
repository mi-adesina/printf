#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

typedef struct
{
    const char *id;
    int (*handler)(va_list);
} convert_match;

int _putchar(char c);
int _printf(const char *format, ...);
int _putchar(char c);
int printStr(va_list args);
int printChar(va_list args);
int printPercent_(va_list args);
int printInteger(va_list args);
int printDecimal(va_list args);

#endif 
