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
	size_t a = 0, b = size - 1, m = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (array[a] != array[b])
	{
		m = a + (value - array[a]) * (b - a) / (array[b] - array[a]);
		if (m > size)
		{
			printf("Value checked array[%lu] is out of range\n",
					m);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);

		if (array[m] < value)
			a = m + 1;
		else if (value < array[m])
			b = m - 1;
		else
			return (m);
	}

	if (value == array[a])
		return (a);

	return (-1);
}
