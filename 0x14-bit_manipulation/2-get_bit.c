#include "main.h"
/**
 *get_bit - get bit at index
 *@n: num
 *@index: index of bit starting from 0
 *Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;

	i = i << index;
	if (n & i)
	{
		return (1);
	}
	else if ((n & i) == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
