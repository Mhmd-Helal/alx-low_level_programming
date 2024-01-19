#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;
	for (k = 0; i < 9; k++)
	{
		for (l = 0; l < 9; l++)
		{
			for (i = 0; i <= 9; i++)
			{
				for ( j = 0; j <= 9; j++)
				for (j = 0; j <= 9; j++)
				{
					putchar(k + '0');
					putchar(l + '0');
					putchar(' ');
					putchar(i + '0');
					putchar(j + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
