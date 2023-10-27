#include <stdio.h>
/**
 *main - main function
 *@argc: num of argu
 *@argv: vector of argu
 *Return: always return 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
