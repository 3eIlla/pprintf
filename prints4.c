#include "main.h"

/**
 * print_unsigned - unsigned int no.s
 * @arpp: arg pointer
 * @paras: parames struct
 *
 * Return: bytes no.
 */
int print_unsigned(va_list arpp, paras_t *paras)
{
	unsigned long ln;

	if (paras->l_modifier)
		ln = (unsigned long)va_arg(arpp, unsigned long);
	else if (paras->h_modifier)
		ln = (unsigned short int)va_arg(arpp, unsigned int);
	else
		ln = (unsigned int)va_arg(arpp, unsigned int);
	paras->unsign = 1;
	return (print_number(convert(ln, 10, CONVERT_UNSIGNED, paras), paras));
}



/**
 * print_address -  addr
 * @arpp: arg pointer
 * @paras: parames struct
 *
 * Return: bytes no.
 */
int print_address(va_list arpp, paras_t *paras)
{
	unsigned long int ln = va_arg(arpp, unsigned long int);
	char *str;

	if (!ln)
		return (_puts("(nil)"));

	str = convert(ln, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, paras);
	*--str = 'x';
	*--str = '0';
	return (print_number(str, paras));
}

/**
 * print_rev - string n reverse
 * @arpp: string
 * @paras: parames struct
 *
 * Return: bytes no.
 */
int print_rev(va_list arpp, paras_t *paras)
{
	int len, csumi = 0;
	char *str = va_arg(arpp, char *);
	(void)paras;

	if (str)
	{
		for (len = 0; *str; str++)
			len++;
		str--;
		for (; len > 0; len--, str--)
			csumi += _putchar(*str);
	}
	return (csumi);
}

/**
 * print_rot13 - string n rot13
 * @arpp: string
 * @paras: parames struct
 *
 * Return: bytes no.
 */
int print_rot13(va_list arpp, paras_t *paras)
{
	int lil, index;
	int count = 0;
	char arr[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";
	char *a = va_arg(arpp, char *);
	(void)paras;

	lil = 0;
	index = 0;
	while (a[lil])
	{
		if ((a[lil] >= 'A' && a[lil] <= 'Z')
		    || (a[lil] >= 'a' && a[lil] <= 'z'))
		{
			index = a[lil] - 65;
			count += _putchar(arr[index]);
		}
		else
			count += _putchar(a[lil]);
		lil++;
	}
	return (count);
}
