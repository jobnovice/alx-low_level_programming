#include "main.h"
/**
 * * _strncat - Entry Point
 * @dest : destination array of string
 * @src : source array of string
 * Return:character
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && j<n ; j++)
	{
		dest[i++] = src[j];
	}
	dest[i] = '\0';	
	return (dest);
}
