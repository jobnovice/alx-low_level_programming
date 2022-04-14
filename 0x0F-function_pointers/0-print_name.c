#include <stdio.h>

/**
 * print_name - a functions that prints name
 * @name: the name variable
 * @f:pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
