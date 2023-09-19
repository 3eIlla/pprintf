#include "main.h"

/**
 * _puts - prints the character
 * @c: Input string
 *
 * Return: Number of bytes/charcter
 */
int _puts(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			_putchar(c[count]);
		}
	}
	return (count);
}
