#include "main.h"

/**
 * _isdigit - Entry point
 * @c: recives an int
 * Return: void nothing to return
 * that's all
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
