#include "main.h"
#include "2-strlen.c"
/**
 *puts_half - print half string
 *@str: string that are printed half
 */
void puts_half(char *str)
{
	int i;
	int len;

	len = _strlen(str);
	if (len % 2 != 0)
		len = len  - 1;
	for (i = len / 2; i < _strlen(str); i++)
		_putchar(*(str + i));
	_putchar('\n');
}
