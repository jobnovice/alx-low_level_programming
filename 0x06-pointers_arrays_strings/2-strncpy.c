#include "main.h"

/**
 * *_strcpy - main function
 *@dest:destination string
 *@src:source string
 *@n:number of times
 *Return:charcter array
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0;src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];
		i++;
	}
	for ( ;j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
