#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **create_array -  Create a array object
 * @str: yeah man the size of thea array. 
 * Return: char*  if there is no mo space
 */

char *_strdup(char *str)
{
	char *array;
	int i,size;

   
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
         	size++;
		i++;
	}
	size++;
	array = (char *) malloc(sizeof(char) * size);

	for (i = 0; str[size != '\0']; i++)
		array[i]= str[i];
	return (array);
}
