#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int i = 0;

	char ch = 'a';

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	while (ch < 'g')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

