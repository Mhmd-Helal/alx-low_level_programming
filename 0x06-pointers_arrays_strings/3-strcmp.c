#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: first string
 * @s2: second string
 * Return: value of string
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] - s2[i] == 0 && s1[i] != '\0'; i++)
	{}
	return (s1[i] - s2[i]);
}
