#include "main.h"

/**
 * _islower - Entry point
 * _islower is the function
 * c is an integer
 * Return: an int value will be returned
 * that's all
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
