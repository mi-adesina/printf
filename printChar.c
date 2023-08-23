#include "main.h"

/**
 * printChar - prints a char.
 * @val: character to be printed.
 * Return: 1.
 */
int printChar(va_list val)
{
	char c = va_arg(val, int);

	_putchar(c);
	return (1);
}
