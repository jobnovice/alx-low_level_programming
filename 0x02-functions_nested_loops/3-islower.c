#include "main.h"

/**
 * _islower - Entry point
 * _islower is the function
 * Return: an int value will be returned
 * that's all
 */
int _islower(int c)
{	char r;
	r = _putchar(c);
	if (r >= 97 || r <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
