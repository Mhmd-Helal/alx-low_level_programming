#include <stdio.h>

void reset_to_98(int *n)
{
	int *ptr;

	ptr = &n;
	*ptr = 98;
}
