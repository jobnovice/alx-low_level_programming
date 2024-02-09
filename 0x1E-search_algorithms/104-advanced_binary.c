#include "search_algos.h"

/**
 * advanced_search - updated version of binary search
 * @array: 
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: int 
 */

int advanced_binary(int *array, size_t size, int value)
{
	int i, low, high, mid;
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	low = 0;
	high = (int) size - 1;
	mid = (int) (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
		{
			printf(", ");
		}
	}
	printf("\n");
	if (array[mid] == value)
	{
		if (array[mid - 1] == value)
		{
			return (mid - 1);
		}
 		return (mid);
	}
	else if (array[mid] > value)
	{
		high = mid -1;
		return (advanced_binary(array + low, high - low + 1, value));
	}
	else
	{
		low = mid - 1;
		return (advanced_binary(array + low, high - low + 1, value));	
	}
