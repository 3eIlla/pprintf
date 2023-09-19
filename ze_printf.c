#include "main.h"

/**
 * _printf - prints output according to a format
 * @format: character string
 *
 * Return: number of character/bytes
 */

int _printf(const char *format, ...)
{
	unsigned int i, ze_count, count = 0;

	va_list print;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(print, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);

		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(print, int));
			i++;
		}

		else if (format[i + 1] == 's')
		{
			ze_count = _puts(va_arg(print, char *));
			i++;
			count += (ze_count - 1);
		}

		else if (format[i + 1] == '%')
		{
			_putchar('%');
		}
		count++;

		va_end(print);	
	}
	return (count);
}

