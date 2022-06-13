#include "main.h"
#include <stdio.h>

/**
 * *_strstr - main function
 *@haystack:to be searched from
 *@needle:to be searched
 *Return:the status of the search
 */
char *_strstr(char *haystack, char *needle)
{
	char *res;
	char *aux;

	while (*haystack != '\0')
	{
		res = haystack;
		aux = needle;

		while (*aux == *haystack && *aux != '\0' && *haystack != '\0')
		{
			haystack++;
			aux++;
		}
		if (*aux == '\0')
			return (res);
		haystack = res + 1;
																}
	return (NULL);
}
