#include "main.h"
/**
 *_strspn - the main function
 *@s:right substring
 *@accept:left substring
 *Return: an int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0, j = 0; s[i] != '\0'; i++, j++)
	{
		if (accept[j] != '\0')
			continue;
		else
			break;
	}
	j++;
	return (j);
}
