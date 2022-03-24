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
	int i, tmp, j;

	for (i = 0, j = (n - 1); i < j; j--, i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
