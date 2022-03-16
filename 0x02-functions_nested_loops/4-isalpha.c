#include "main.h"

/**
 * _isalpha - Entry point
 * @c: recives an int
 * Return: void nothing to return
 * that's all
 */
int _isalpha(int c)
{
	if ((c >= 94 && c <= 122) || (c <= 65 && c >= 98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
