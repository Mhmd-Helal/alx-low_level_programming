#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{	
		putchar(ch);
		ch--;
	}	
	putchar('\n');
	return(0);
}
