#include "main.h"
#include "2-strlen.c"
/**
 *puts2 - print string
 *@str: string that are printed
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
