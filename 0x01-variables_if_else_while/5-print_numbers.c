#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int counter = 0;

	while (counter < 10)
	{
		printf("%d", counter);
		counter++;
	}
	printf("\n");
	return (0);
}
