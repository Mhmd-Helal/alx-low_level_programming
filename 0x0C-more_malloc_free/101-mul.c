#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int *ptr;
	int num1, num2, res;
	int i;

	if(argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	ptr = malloc((argc - 1) * sizeof(int));
	for(i = 1; i < argc; i++)
		ptr[i - 1] = atoi(argv[i]);
	num1 = ptr[0];
	num2 = ptr[1];
	res = mul(num1, num2);
	printf("%d\n", res);
	return (0);
}
