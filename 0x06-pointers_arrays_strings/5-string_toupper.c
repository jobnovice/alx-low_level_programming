#include <stdio.h>
#include "main.h"
/**
 *  *string_toupper - a function that reverse an array
 * @s: an integer pointer
 * Return: it's self
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
