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
