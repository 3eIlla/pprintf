#ifndef MAIN_H
#define MAIN_H

/*Libraries*/
#include <stdio.h> /*For */

#include <unistd.h>  /*for display the function write */

#include <stdarg.h>   /*for  */

#include <stdarg.h>   /*for argument after "..."*/

#include <limits.h>   /*for max byet no. */

#include <stdlib.h>















/**** .   FOR THE TASKS   . ****/
/*0* main*/
int _printf(const char *format, ...);

/*/personal_sub-main*/
int ze_putchar(char *c);
int ze_puts(char *c);








#define PARAMS_INIT {0}
/**
 * struct paras - struc out
*/
typedef struct paras
{
	unsigned int unsign			: 1;
} paras_t;

void init_paras(paras_t *paras, va_list print);
/*/ THE MAIN SPECIFIER FUNCTION/*/
/**
 * struct spcfr- struc out
 * @spcfr: strin
 * @func: *function
*/
typedef struct spcfr
{
	/* data */
	char *spcfr; /*string / 1 char*/
	int (*func)(va_list, paras_t *);
} spcfr_t; /*chang char to specifier type*/

/*display*/
/* puts 1st brings whole string for putchar */
/* then putchar pasifier each single char*/

/*1*/
/*/c .     %c .    */
int print_char(va_list print, paras_t *paras);
/*/s .     %s .  */
int print_string(va_list print, paras_t *paras);
/*/% .     %% .    */
int Print_percent(va_list print, paras_t *paras);

/*to call spicifieres*/
int get_print_func(char *spc, va_list print, paras_t *paras);
int (*get_specifier(char *spc))(va_list print, paras_t *paras);





/*4* local buffer of 1024 chars in order to call write as little as possible.*/

#define OUT_PUT_BUFF_SIZE 1024
#define BUFF_FLUSH -1
/* . _putchar(BUF_FLUSH); */

#endif
