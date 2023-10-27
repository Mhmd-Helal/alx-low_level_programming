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
		printf("Error\n");
		return (1);
	}
	else
	{
		int i;
		int mul = 1;

		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
