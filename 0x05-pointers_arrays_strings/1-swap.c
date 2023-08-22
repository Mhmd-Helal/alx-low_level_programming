#include "main.h"
/**
 * swap_int - swaps integers
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
