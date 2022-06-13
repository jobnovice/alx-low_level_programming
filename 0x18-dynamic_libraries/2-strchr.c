#include <stdio.h>
#include "main.h"
/**
 **_strchr - main function
 *@s:the string to be searched from
 *@c:the charcter to be serached
 *Return: an address
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
