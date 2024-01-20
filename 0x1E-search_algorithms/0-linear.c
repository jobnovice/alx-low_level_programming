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

     size_t i;
     for (i = 0; i < size; i++){
        if (array[i] == value){
            printf("Found [%d] at index: [%zu]", value, i);
            return i;
        }
        printf("value checked array[%zu] = [%d]", i, value);
     }
    printf("Found [%d] at index: [%d]", value, -1);
     
     return -1;
 }