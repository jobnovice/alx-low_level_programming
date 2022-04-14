#include "function_pointers.h"
/**
 * array_iterator -
 * @array:
 * @size:
 * @action:
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    array=malloc(size);
    unsigned int i;

    for (i= 0; i < size; i++)
       (*action)(array[i]);

}