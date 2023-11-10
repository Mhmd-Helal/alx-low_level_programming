#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all - print all of args
 *@format: list of type arguments
 */
void print_all(const char * const format, ...)
{
	int len = 0;
	int i = 0;
	char *str;
	char *seprate = "";
	va_list args;

	va_start(args, format);
	while (format[len] != '\0')
		len++;
	while (i < len && format)
	{
		if (format[i] == 'c')
		{
			printf("%s%c", seprate, va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", seprate, va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", seprate, va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("nill");
			else
				printf("%s%s", seprate, str);
		}
		seprate = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}

