#include <stdio.h>
#include <stdlib.h>
/**
 *main - main function
 *@argc: num of argu
 *@argv: vector of argu
 *Return: always return 0
 *
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("missing\n");
		return (1);
	}
	else
	{
		int i;
		int sum = 0;

		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
