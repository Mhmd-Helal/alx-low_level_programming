#include "main.h"
#include "2-strlen.c"
/**
 *print_rev - print string reverse
 *@s: string that are reverse
 */
void print_rev(char *s)
{
	int i = _strlen(s);


	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
