#include "search_algos.h"

/**
 * exponential_search - exponential search algorthim
 * @array: the place to search at
 * @size: the size of the array
 * @value: the value to search for
 * Return: int
 */


int exponential_search(int *array, size_t size, int value)
{
	int b, low, high, mid;

	b = 1;

	if (array == NULL || size <= 0)
	{
		return (-1);
	}
	while (b < (int) size  && array[b] < value)
	{
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
		b *= 2;
	}
	low = (int) (b / 2);
	if (b < (int)size)
	{
		high = b;
	}
	else
	{
		high = size - 1;
	}
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	while (low <= high)
	{
		int i;

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