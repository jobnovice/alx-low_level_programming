#include "search_algos.h"

/**
 * jump_search - another search algorthim that seraches the targt by
 * jumping through the list
 * @array: the list or array the value to be searched at
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of the value to be searched if not found -1
 */

int jump_search(int *array, size_t size, int value)
{
	int jump = (int)sqrt((int)size);

	int i, j;

	for (i = 0; i <= (int)size - 1; i += jump)
	{

		if (array[i]  >= value)
		{
			break;
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%d] and [%d]\n", (i - jump), i);

	for (j = (i - jump); j <= i && j <= (int) size - 1; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);

		if (array[j] == value)
		{
			return (j);
		}
	}
	return (-1);
}
