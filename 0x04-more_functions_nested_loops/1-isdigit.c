#include "main.h"
/**
 * _isdigit -  checks for a digit
 * @c: char to be check
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
