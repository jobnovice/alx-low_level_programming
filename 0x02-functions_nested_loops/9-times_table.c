#include "main.h"

/**
 * times_table - Entry point
 * is the integer to be checked
 * Return: void nothing to return
 * that's all
 */
void times_table(void)
{
	for (i = 0; i <=9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf(i * j);
		}
	}
}
