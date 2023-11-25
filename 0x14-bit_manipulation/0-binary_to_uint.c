#include "main.h"
#include <stddef.h>
/**
 *binary_to_uint - convert bin to unsignedint
 *@b: char of bin is 1 or 0
 *Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int bin = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '1')
		{
			bin = bin << 1 | 1;
		}
		else if (b[i] == '0')
		{
			bin = bin << 1;
		}
		else
			return (0);
		i++;
	}
	return (bin);
}
