#include "main.h"


/**
 * get_print_func - find func form
 * @spc: strin
 * Return: no. of byts
*/
int get_print_func(char *spc, va_list arp, paras_t *paras)
{
	int (*func)(va_list, paras_t *paras);
	if (func)
	{
		return (func(arp, paras));
	}
	return (0);
}

/**
 * get_specifier - find func form
 * @spc: strin
 * Return: no. of byts
*/
int (*get_specifier(char *spc))(va_list ap, params_t *params)
{
	//int (*func)(va_list, paras_t *);
	spcfr_t spcfrs[] {
		{"c", print_char},
		{"s", print_char},
		{"%", print_char},
		{NULL, NULL}
	}

	int in = 0;

	while (spcfr[in].spcfr)
	{
		if (*spc == spcfr[in].spcfr[0])
		{
			return spcfr[in].func;
		}
		in += 1;
	}
	return (NULL);
}

