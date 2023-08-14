#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char ch;
	ch = 'a';
	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';
	while(ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
