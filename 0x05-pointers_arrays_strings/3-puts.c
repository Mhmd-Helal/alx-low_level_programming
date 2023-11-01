#include "main.h"

/**
 *_puts - function print string
 *@str: array that are printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
