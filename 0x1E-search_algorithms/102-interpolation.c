#include "search_algos.h"

/**
 * interpolation_search - another search algorthim that searches a
 * value based on finding the probable location of the list
 * @array: the list to perform the alogrthim on
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the value or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	int pos;

	low = 0;
	high = (int) size - 1;

	pos = low + (((double)(high - low) /
	(array[high] - array[low])) * (value - array[low]));

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		if (pos > (int) size - 1)
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}
		else if (array[pos] > value)
		{
			high = pos - 1;
		}
		else
		{
			low = pos + 1;
		}
	}
	return (-1);
}
