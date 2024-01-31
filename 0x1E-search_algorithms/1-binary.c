#include "search_algos.h"


/**
 * binary-search - implementation of binary search 
 * @array: list of numbers that includes the item to be searhced for
 * @size: number of items in the array
 * @value: value of the items to be searched for
 * return: the index of item that was searched or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{

    int i;
    int low = 0;
    int high = (int)size;

    while (low <= high)
    {
       int mid = (low + high) / 2;
        if (array[mid] == value)
        {
            return mid;
        }
        else if (array[mid]  > value)
        {
            high = mid - 1;
        }
        else 
        {
            low = mid + 1;
        }
    }
    

}