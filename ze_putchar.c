#include "main.h"

/**
 * ze_putchar - printsa character to stdout
 * @c: character to be printed
 *
 * Return: 1 (On success)
 */
int ze_putchar(char c)
{
	return (write(1, &c, 1));
}
