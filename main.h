#ifndef MAIN_H
#define MAIN_H

/*Libraries*/
#include <stdio.h> /*For */

#include <unistd.h>  /*for display the function write */

#include <stdarg.h>   /*for  */

#include <stdarg.h>   /*for argument after "..."*/  

#include <limits.h>   /*for max byet no. */  















/**** .   FOR THE TASKS   . ****/
/*0*/
//main
int _printf(const char *format, ...);

//personal_sub-main
int ze_putchar(char c);
int ze_puts(char c);





// THE MAIN SPECIFIER FUNCTION//
/**
 * struct specifier - struc out
 * 
*/
typedef struct spcfr
{
	/* data */
	char *spcfr; /*string / 1 char*/
	int (*func)(va_list, paras_t *);
}; spcfr_t /*chang char to specifier type*/

/*display*/
/* puts 1st brings whole string for putchar */
/* then putchar pasifier each single char*/

/*1*/
//c .     %c
int print_char(va_list arp, paras_t *paras);
//s .     %s
int print_string(va_list arp, paras_t *paras);
//% .     %%
int Print_percent(va_list arp, paras_t *paras);

/*2*/    // the unsigned int argument is converted to binary //
int print_binary;

/*3*/
//u .     %u
int print_unsigned;
//o .     %o
int print_octal;
//x .     %x
int print_hex;
//X .     %
int print_HEX;

/*4*/ // . local buffer of 1024 chars in order to call write as little as possible. //

#define OUT_PUT_BUFF_SIZE 1024
#define BUFF_FLUSH -1

/*5*/
//prints the string.
// Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, 
// > followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
int print_S;



/*6*/
// r .     %r
int print_rev;


#define PARAMS_INT {0, 0, 0, 0, 0,} . /* X10 */
/**
 * struct parameters - params struc
 * @
 * @unsign: unsign value
 * 
*/
typedef struct parames 
{
	/* tasks functions */
/* F z user input is = 2 one of these turn 0 to 1 */
/*7*/
// + .  space  .   # //


/*8*/
// long    ,   Short //



/*7*/

/*8*/

/*9*/

/*10*/

/*11*/

/*12*/

}; params_t  /*to change z name 2 params type*/
/* use < ptams_t prams = PARAMS_INT > */





/*13* Reversed */


/*14*/



/*15*/



/*16*/





#endif
