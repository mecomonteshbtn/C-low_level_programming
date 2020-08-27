#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search algorithm for arrays.
 * @array: A pointer to inputed array.
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = 0, step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (b < size && array[b] < value)
	{
		a = b;
		b += step;
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);

	while (a < b)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}

	return (-1);
}
