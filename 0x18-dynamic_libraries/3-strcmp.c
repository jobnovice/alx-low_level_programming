#include "main.h"
/**
 *_strcmp - main function
 *@s1:left string
 *@s2:left string
 *Return: int type
 */
int _strcmp(char *s1, char *s2)
{
	int i, n;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			n = s1[i] - s2[i];
			return (n);
		}
	}
	return (0);
}
