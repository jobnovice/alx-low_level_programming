#include "main.h"

/**
 * jack_bauer - Entry point
 * is the integer to be checked
 * Return: void nothing to return
 * that's all
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (i <= 1)
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
					}
					else if (i > 1 && j < 3)
					{
						_putchar(j);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
					}
				}
			}
		}
	}
}
