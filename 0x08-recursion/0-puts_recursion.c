#include "main.h"

/**
 *_puts_recursion - use recursion
 *@s : parameter
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion(++s);
	}
}
