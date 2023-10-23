#include "sort.h"
/**
 * swap - swaps two integers.
 * @int1: first integer.
 * @int2: The second integer to swap.
 */
void swap(int *int1, int *int2)
{
	int temp;

	temp = *int1;
	*int1 = *int2;
	*int2 = temp;
}

/**
 * selection_sort - sort array of ints in ascending order
 *                  using selection sort algorithm.
 * @array: array of integers.
 * @size: size of the array.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap(array + i, min);
			print_array(array, size);
		}
	}
}
