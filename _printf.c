#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: specifier to be printed.
 *
 * Return: length of string printed.
 */
int _printf(const char *format, ...);
{
	convert_match format_handlers[] = {
		{"%s", printStr}, {"%c", printChar}, {"%%", printPercent},
		{"%i", printInteger}, {"%d", printDecimal}
	};

	va_list args;
	int i = 0, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			int j;

			for (j = 0; j < 5; j++)
			{
				if (format_handlers[j].id[1] == format[i + 1])
				{
					len += format_handlers[j].handler(args);
					i += 2; /* Move past the format specifier */
					break;
				}
			}
			if (j == 5)
			{
				/* Invalid format specifier, print as is */
				_putchar('%');
				len++;
				i++;
			}
		}
		else
		{
			/* Regular character, print as is */
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}
