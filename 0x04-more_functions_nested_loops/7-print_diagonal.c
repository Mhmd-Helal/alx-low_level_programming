#include "main.h"
/**
 * print_diagonal - draws a straight line in the terminal.
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');

	}
	_putchar('\n');
}
