#include "main.h"
/**
 **_strpbrk - main function
 *@s:the place to look from
 *@accept: the string to look for
 *Return: an array of charcters
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	if (s[i] == accept[j])
		return (&s[i]);
	else
		return ('\0');
}
