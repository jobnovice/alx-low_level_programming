#include "main.h"

/**
 * _isupper - Entry point
 * @c: recives an int
 * Return: void nothing to return
 * that's all
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
