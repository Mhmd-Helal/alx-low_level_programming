#include "main.h"
/**
 *pow - x pow y
 *@x: base
 *@y: power
 *Return: x power y
 */
int _pow(int x, int y)
{
	int i;
	int res = 1;

	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	else
	{
		for (i = 0; i < y; i++)
			res *= x;
		return (x);
	}
}
