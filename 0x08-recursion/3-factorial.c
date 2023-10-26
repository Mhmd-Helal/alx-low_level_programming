#include "main.h"
/**
 *factorial - foctorial of n
 *@n : parameter
 *Return: value of factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
