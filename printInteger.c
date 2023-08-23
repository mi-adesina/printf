#include "main.h"

/**
 * printInteger - prints an integer
 * @args: argument to be printed
 * Return: number of characters printed
 */
int printInteger(va_list args)
{
	int n = va_arg(args, int);
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		i++;
	}

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	int num = n;
	int exp = 1;

	while (num > 0)
	{
		exp *= 10;
		num /= 10;
	}

	num = n;

	while (exp > 1)
	{
		exp /= 10;
		int digit = num / exp;

		_putchar('0' + digit);
		num %= exp;
		i++;
	}

	_putchar('0' + num);
	return (i + 1);
}
