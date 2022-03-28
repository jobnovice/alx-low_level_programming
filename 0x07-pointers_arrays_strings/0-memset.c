#include "main.h"
/**
 **_memset - the main function
 *@s:the memory location
 *@b:constant charcter
 *@n:fills n bytes of the desired location
 *Return:a charcter
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = _putchar(b);
	}
	_putchar('\n');
	return (s);
}
