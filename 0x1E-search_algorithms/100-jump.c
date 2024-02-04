#include <search_algos.h>

/**
 * jump_search - another search algorthim that seraches the targt by jumping through the list  
 * @array: the list or array the value to be searched at
 * @size: the size of the array
 * @value: the value to be searched
 */

int jump_search(int *array, size_t size, int value)
{
	int jump = (int)sqrt((int)size);

	int i,j;
	for (i = 0; i <= (int)size -1; i += jump)
	{
		printf("Value checked array[%d] = [%d]\n",i, array[i]);
		if (array[i] == value)
		{
			return i;
		}
		if (array[i]  >= value)
		{
			break;
		}
	}
	
	for (j = (i - 4); j <= i; j++)
	{
		if (array[j] == value)
		{
			printf("Value found between indexes [%d] and [%d]\n",(i - 4), i);
			return j;
		}
	}
	return -1;
}
