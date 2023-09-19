#include "main.h"



/**
 * init_paras - reset buf
 * @paras: parameters struct
 * @print: *argument
 *
 * Return: void
 */
void init_paras(paras_t *paras, va_list print)
{
	paras->unsign = 0;
(void)print;
}



/**
 * get_print_func - find func form
 * @spc: strin
 * @print: *argmnt
 * @paras: Parameters
 * Return: no. of byts
*/
int get_print_func(char *spc, va_list print, paras_t *paras)
{
	int (*func)(va_list, paras_t *paras) = get_specifier(spc);

	if (func)
	{
		return (func(print, paras));
	}
	return (0);
}

/**
 * get_specifier - find func form
 * @spc: strin
 * @print: *argumen
 * Return: no. of byts
*/
int (*get_specifier(char *spc))(va_list print, paras_t *paras)
{
	/*int (*func)(va_list, paras_t *);*/
	spcfr_t spcfrs[] = {
		{"c", print_char},
		{"s", print_char},
		{"%", print_char},
		{NULL, NULL}
	};

		for (int in = 0; spcfrs[in].spcfr; in += 1)
		{
		if (*spc == spcfrs[in].spcfr[0])
		{
			return (spcfrs[in].func);
		}
		}
	return (NULL);
}

