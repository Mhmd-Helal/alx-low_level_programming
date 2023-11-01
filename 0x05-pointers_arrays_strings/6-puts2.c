#include "main.h"
#include "2-strlen.c"
#include "_putchar.c"
/**
 *puts2 - print string
 *@str: string that are printed
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str) - 1; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
