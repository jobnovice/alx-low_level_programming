#include "main.h"
/**
 * _puts_recursion - the main function
 *@s: the charcter array
 * Return:nada
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
