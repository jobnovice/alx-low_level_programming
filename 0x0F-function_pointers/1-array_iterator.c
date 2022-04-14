#include "function_pointers.h"
/**
 * array_iterator - main function
 * @array:array with
 * @size:size type size_t
 * @action:pointer to function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	array=malloc(size);
	unsigned int i;

	for (i= 0; i < size; i++)
 		*action)(array[i]);

}
