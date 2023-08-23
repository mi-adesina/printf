#include "main.h"

/**
 * printDecimal - prints a decimal
 * @args: argument to be printed
 * Return: number of characters printed
 */
int printDecimal(va_list args)
{
	int number = va_arg(args, int);
	int currentDigit, lastDigit = number % 10;
	int printedDigitsCount = 1;
	int exponent = 1, remainingNumber;

	number = number / 10;
	remainingNumber = number;

	if (lastDigit < 0)
	{
		_putchar('-');
		remainingNumber = -remainingNumber;
		number = -number;
		lastDigit = -lastDigit;
		printedDigitsCount++;
	}

	if (remainingNumber > 0)
	{
		while (remainingNumber / 10 != 0)
		{
			exponent = exponent * 10;
			remainingNumber = remainingNumber / 10;
		}

		remainingNumber = number;

		while (exponent > 0)
		{
			currentDigit = remainingNumber / exponent;
			_putchar(currentDigit + '0');
			remainingNumber = remainingNumber - (currentDigit * exponent);
			exponent = exponent / 10;
			printedDigitsCount++;
		}
	}

	_putchar(lastDigit + '0');

	return (printedDigitsCount);
}

