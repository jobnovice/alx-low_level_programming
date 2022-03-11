#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (((i >= 1 && j <= i - 1) || (j >= 1 && k <= j - 1)) || ((i == j) || (i == k) || (j == k)))
				{
				continue;
				}
				else
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i < 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
