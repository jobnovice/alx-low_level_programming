#include "search_algos.h"

/**
 * binary_search - implementation of binary search
 * @array: list of numbers that includes the item to be searhced for
 * @size: number of items in the array
 * @value: value of the items to be searched for
 * Return: the index of item that was searched or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int)size - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		int i;
		printf("Searching in array: ");
		for(i = low; i <= high; i++)
		{
			printf("%d",array[i]);

			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}
