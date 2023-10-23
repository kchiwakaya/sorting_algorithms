#include "sort.h"
/**
 * swap - swap two integers in an array.
 * @int1: first integer to swap.
 * @int2: second integer to swap.
 */
void swap(int *int1, int *int2)
{
	int temp;

	temp = *int1;
	*int1 = *int2;
	*int2 = temp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order.
 * @array: array of integers to sort.
 * @size: size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i; 
	size_t length = size;
	int redo = 0;

	if (array == NULL || size < 2)
		return;

	while (redo == 0)
	{
		redo = 1;
		for (i = 0; i < length - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				redo = 0;
			}
		}
		length--;
	}
}
