#include "main.h"
/**
 * _isupper - checks if uppercase
 * @c: character to check
 *
 * Return: 1 if true 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
