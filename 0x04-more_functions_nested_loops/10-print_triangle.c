#include "main.h"
/**
 * print_triangle - main functions
 * @size: size of the display size
 * well that's about it
 * Return: void nothing to retrun
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i + j >= size - 1)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
