#include "main.h"

/**
 * _printf - prints output according to a format
 * @format: character string
 *
 * Return: number of character/bytes
 */

int _printf(const char *format, ...)
{
	int il, printedl = 0, printed_charsl = 0;
	int  sizel;
	va_list listl;

	if (format == NULL)
		return (-1);

	va_start(listl, format);

	for (il = 0; format && format[il] != '\0'; il++)
	{
		if (format[il] != '%')
		{
			/* write(1, &format[i], 1);*/
			printed_charsl++;
		}
		else
		{
			sizel = get_size(format, &il);
			il = il + 1;
			printedl = handle_print(format, &il, listl, sizel);
			if (printedl == -1)
				return (-1);
			printed_charsl += printedl;
		}
	}

	va_end(listl);

	return (printed_charsl);
}
