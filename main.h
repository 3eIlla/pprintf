#ifndef MAIN_H
#define MAIN_H

/*Libraries*/
#include <stdio.h>    /*For any out in puts */

#include <unistd.h>  /*for display the function write */

#include <stdarg.h>   /*for  */

#include <stdarg.h>   /*for argument after "..."*/

#include <limits.h>   /*for max byet no. */

#include <stdlib.h>


#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1


#define NULL_STRING "(null)"

#define PARAS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

#define CONVERT_LOWERCASE	1
#define CONVERT_UNSIGNED	2

/**
 * struct parameters - parameters struct
 *
 * @unsign: flag if unsigned value
 *
 * @plus_flag: flag to % +
 * @space_flag: flag to % ' '
 * @hashtag_flag: flag to % #
 * @zero_flag: flag to % 0
 * @minus_flag: flag to % -
 *
 * @width: field width specified
 * @precision: field precision specified
 *
 * @h_modifier: on if h_modifier is specified
 * @l_modifier: on if l_modifier is specified
 *
 */
typedef struct parameters
{
	unsigned int unsign			: 1;

	unsigned int plus_flag		: 1;
	unsigned int space_flag		: 1;
	unsigned int hashtag_flag	: 1;
	unsigned int zero_flag		: 1;
	unsigned int minus_flag		: 1;

	unsigned int width;
	unsigned int precision;

	unsigned int h_modifier		: 1;
	unsigned int l_modifier		: 1;
} paras_t;

/**
 * struct specifier - Struct token
 *
 * @specifier: format token
 * @f: The function associated
 */
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list, paras_t *);
} specifier_t;



/* pts.c */
/* _put.c module */
int _puts(char *str);
int _putchar(int c);

/* _prinf.c */
int _printf(const char *format, ...);

/* paras.c module */
void init_paras(paras_t *paras, va_list arpp);

/* string_fields.c modoule */
char *get_precision(char *pop, paras_t *paras, va_list arpp);

/* number.c module */
char *convert(long int num, int base, int flags, paras_t *paras);

/* print_number.c module */
int _isdigit(int c);
int _strlen(char *s);


/* .    TO GET ANYTHING     */
/* specifier.c module */
int (*get_specifier(char *s))(va_list arpp, paras_t *paras);
int get_print_func(char *s, va_list arpp, paras_t *paras);
int get_flag(char *s, paras_t *paras);
int get_modifier(char *s, paras_t *paras);
char *get_width(char *s, paras_t *paras, va_list arpp);


/* .   TO PRINT EVERYTHING     */
/* print_functions.c module */
int print_char(va_list arpp, paras_t *paras);
int print_int(va_list arpp, paras_t *paras);
int print_string(va_list arpp, paras_t *paras);
int print_percent(va_list arpp, paras_t *paras);
int print_S(va_list arpp, paras_t *paras);
/* number.c module */
int print_unsigned(va_list arpp, paras_t *paras);
int print_address(va_list arpp, paras_t *paras);
/* convert_number.c module */
int print_hex(va_list arpp, paras_t *paras);
int print_HEX(va_list arpp, paras_t *paras);
int print_binary(va_list arpp, paras_t *paras);
int print_octal(va_list arpp, paras_t *paras);
/* simple_printers.c module */
int print_from_to(char *sttr, char *sttp, char *except);
int print_rev(va_list arpp, paras_t *paras);
int print_rot13(va_list arpp, paras_t *paras);
/* print_number.c module */
int print_number(char *str, paras_t *paras);
int print_number_right_shift(char *str, paras_t *paras);
int print_number_left_shift(char *str, paras_t *paras);




#endif
