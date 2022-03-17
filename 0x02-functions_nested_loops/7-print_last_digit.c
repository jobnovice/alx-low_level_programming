#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: is the integer to be checked
 * Return: void nothing to return
 * that's all
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (n < 0)
	{
		r = r * -1;
	}
	_putchar(r + '0');
	return (r);

}
