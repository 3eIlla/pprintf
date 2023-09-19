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
int _putchar(char c);
int _puts(char *c);


/**
 * struct fmtl - Struct op
 *
 * @fmt: format.
 * @fnc: func associated.
 */
struct fmtl
{
	char fmtl;
	int (*fnc)(va_list, char[], int, int);
};


/**
 * typedef struct fmtl fmtl_t - Struct 
 *
 * @fmtl: The format.
 * @fml_t: The function associated.
 */
typedef struct fmtl fmtl_t;


int get_size(const char *format, int *i);
int handle_print(const char *fmt, int *il, va_list listl, int sizel);



#define PARAMS_INIT {0}
/* .   */
/**
 * struct paras - struc out
*/
typedef struct paras
{
	unsigned int unsign			: 1;
} paras_t;

void init_paras(paras_t *paras, va_list print)
{
	paras->unsign = 0;
	(void)print;
};


#endif
