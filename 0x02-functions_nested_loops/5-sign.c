#include "main.h"

/**
 * print_sign - Entry point
 * @n: is the integer to be checked
 * Return: void nothing to return
 * that's all
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
