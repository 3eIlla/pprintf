#include "main.h"

/**
 * _printf - prints output according to a format
 * @format: character string
 *
 * Return: number of character/bytes
 */

int _printf(const char *format, ...)
{
	unsigned int count = 0;
	char *i, *ze_count;
	paras_t paras = PARAMS_INIT;

	va_list print;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == '\0' && !format[2])
	{
		return (-1);
	}

	va_start(print, format);

	for (i = (char *)format; *i; i++)
	{
		init_paras(&paras, print);
		if (*i != '%')
		{
			count = count + _putchar(*i);
			continue;
		}
		ze_count = i;
		i = i + 1;
	}

		va_end(print);
	return (count);
}
