#include "search_algos.h"

/**
 * interpolation_search - interpolation search algorithm for arrays.
 * @array: A pointer to inputed array.
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = (int)size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (array[low] != array[high])
	{
		size_t pos = low + (((double)(high - low) / (array[high] -
			array[low])) * (value - array[low]));
		if (pos < low || pos > high)
		{
			printf("Value checked array[%lu] is out of range\n",
					pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);

	return (-1);
}
