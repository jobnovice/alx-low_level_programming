#include "main.h"

/**
 * main - Entry point
 * print alphabet is the function
 * Return: void nothing to return
 * that's all
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
