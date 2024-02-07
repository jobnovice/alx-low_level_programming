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
	int b, low, high, index;

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
	index = binary_search(array + low, high - low + 1, value);
	if (index != -1)
	{
		return (index + low);
	}
	return (-1);

}
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

