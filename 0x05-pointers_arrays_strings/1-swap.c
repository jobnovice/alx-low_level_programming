#include "main.h"
/**
 *swap_int - swap function
 *@a: first number
 *@b: second number
 *Return - none
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
