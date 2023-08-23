#include "main.h"
/**
 * printStr - prints a string.
 * @val: sting argument.
 * Return: the length of the printed string.
 */
int printStr(va_list val)
{
	char *s = va_arg(val, char *);
	int len;

	if (s == NULL)
		s = "(null)";
	for (len = 0; s[len]; len++)
		_putchar(s[len]);

	return (len);
}
