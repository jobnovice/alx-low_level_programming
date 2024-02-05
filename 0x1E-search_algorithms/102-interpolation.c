#include "search_algos.h"

/**
 * interpolation_search - another search algorthim that searches a value based on finding the probable 
 * location of the list
 * 
 * @array: the list to perform the alogrthim on 
 * @size: the size of the array
 * @value: the value to search for
 * Returns - the index of the value or -1 
 */

int interpolation_search(int *array, size_t size, int value)
{
	int i, low, high, pos1;
	low = 0;
	high = (int) size - 1;
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));


	if ( ! array){
		return -1;
	}

	for (i = 0; i <= (int) size -1; i++)
	{	
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (array[pos] == value){
			return pos;
		}
		else if (array[pos] > value){
			high = pos -1;
		}
		else {
			low = pos + 1;
		}
	}
	return (-1);
}