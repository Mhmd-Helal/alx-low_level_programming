#include "main.h"
/**
 * print_triangle -  prints a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = size; j > i; j--)
			_putchar(' ');
		for (k = 0; k < i + 1; k++)
			_putchar('#');
		_putchar('\n');
	}
}
