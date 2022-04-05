#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **create_array -  Create a array object
 * @size: yeah man the size of thea array. 
 * @c:to be populated with this
 * Return: char* 
 */

char *create_array(unsigned int size, char c)
{
    char *array;

	if (!size)
		return (NULL);

	array = (char *) malloc(sizeof(char) * size);

	if (array)
	{
		while (size > 0)
			array[--size] = c;
	}
	return (array);
}