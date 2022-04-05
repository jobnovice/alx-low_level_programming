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
    char *p;
    unsigned int i;

    p = malloc(size * sizeof(char));
    
    if (size != 0)
    { 
        for (i = 0; i < size; i++)
        {
            p[i] = c;
        }
        return p;
    }
    else 
        return ('\0');   
}