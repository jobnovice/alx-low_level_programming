#include <stdio.h>
#include "main.h"
/**
 *  *string_toupper - a function that reverse an array
 * @s: an integer pointer
 * Return: it's self
 */
char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}

	return (s);
}
