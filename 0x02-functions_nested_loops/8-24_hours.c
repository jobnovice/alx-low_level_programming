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

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 53; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (i <= 49)
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
					}
					else if (i > 49 && j < 52)
					{
						_putchar(j);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
					}
					_putchar('\n');
				}
			}
		}
	}
}
