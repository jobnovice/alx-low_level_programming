#include "main.h"
#include <stdio.h>
/**
 *reverse_array - main function
 *@a:array
 *@n:n times
 *Return: nada
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; n > 0; n--, i++)
	{
		a[i] = a[n - 1];
	}
}
