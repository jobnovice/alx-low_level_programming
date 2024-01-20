#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - search algorthim to retreive an item 
 * @array: the list of which the value to be searched in
 * @size: the size of the array
 * @value: the value to be searched
 * Returns: the index of the value to be searched
 */
 int linear_search(int *array, size_t size, int value)
 {
     if (array == NULL) return -1;
     for (int i = 0; i < size; i++){
        if (array[i] == value){
            return i;
        }
     }
     return -1;
 }