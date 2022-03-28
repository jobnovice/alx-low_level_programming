#include "main.h"
/**
 **_memcpy - the main function that returns main
 *@dest:destination char array
 *@src: source array
 *@n: at most n bytes
 *Return: a char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
