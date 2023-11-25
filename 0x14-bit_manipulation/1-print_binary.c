#include "main.h"
/**
 *print_binary - conver to binary
 *@n: number which converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	i = i << ((sizeof(i) * 8) - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	while (i > 0)
	{
		if ((n & i) == 0)
			i = i >> 1;
		else
			break;
	}
	while (i > 0)
	{
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
		i = i >> 1;
	}
}
