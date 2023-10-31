#include "main.h"
/**
 *_strlen - gets num of char in string
 *@s: char of string to get num
 *Return: len of charachter
 */
int _strlen(char *s)
{
	int i;
	int total = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		total += 1;
	}
	return (total);
}
