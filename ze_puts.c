#include <main.h>

/**
 * ze_puts - prints the character
 * @c: Input string
 *
 * Return: Number of bytes/charcter
 *
int ze_puts(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			ze_putchar(c[count]);
		}
	}
	return (count);
}

