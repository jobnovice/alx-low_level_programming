#include <stdio.h>
#include "main.h"
/**
 *  *string_toupper - a function that reverse an array
 * @s: an integer pointer
 * Return: it's self
 */
char *string_toupper(char *s)
{
	int i, j;

	while (s[j] != '\0')
		j++;

	for (i = 0; i <= j; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}
