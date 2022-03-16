#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * print alphabet is the function
 * Return: void nothing to return
 * that's all
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 94; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
