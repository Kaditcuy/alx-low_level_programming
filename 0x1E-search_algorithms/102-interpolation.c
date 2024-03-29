#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located,
 * or -1 if not found or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (!array)
		return (-1);

	while (array[high] != array[low] && value >= array[low]
		&& value <= array[high])
	{
		size_t pos = low + (((double)(high - low) / (array[high] -
						array[low])) * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return ((int)pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%lu] = [%d]\n", low, array[low]);
	if (value == array[low])
		return ((int)low);
	else
		return (-1);
}
