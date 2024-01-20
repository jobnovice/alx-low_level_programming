#include <stdlib.h>
#include  <stdio.h>

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
            printf("Found [%d] at index: [%d]", i, value);
            return i;
        }
        printf("value checked array[%d] = [%d]", i, value);
     }
     return -1;
 }