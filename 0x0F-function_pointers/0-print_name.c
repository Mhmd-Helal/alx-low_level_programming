#include "main.h"
/**
 *print_name - print the name
 *@name: name to print
 *@f: function to use
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
