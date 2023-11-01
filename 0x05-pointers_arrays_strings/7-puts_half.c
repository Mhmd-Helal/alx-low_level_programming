#include "main.h"
#include "2-strlen.c"
/**
 *
 *
 *
 *
 */
void puts_half(char *str)
{
	int i;

	for (i = _strlen(str) / 2; i < _strlen(str) ; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
