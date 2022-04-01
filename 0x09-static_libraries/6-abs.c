#include "main.h"

/**
 * _abs - Entry point
 * @n: is the integer to be checked
 * Return: void nothing to return
 * that's all
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
