#include "sort.h"
/**
 * swap - swaps two integers in an array.
 * @first:first integer.
 * @second:second integer.
 */
void swap(int *first, int *second)
{
        int temp;

        temp = *first;
        *first = *second;
        *second = temp;
}
/*
 * lomuto_partn - order a subset of array according to
 *                    the lomuto partition scheme .
 * @array: array of ints.
 * @size: size of the array.
 * @sub1: starting index of the subset to order.
 * @sub2: las index of the subset to order.
 *
 * Return:final partition index.
 */
int lomuto_partn(int *array, size_t size, int sub1, int sub2)
{
	int top, bottom;
	int *pivot;

	pivot = array + sub2;
	for (top = bottom = sub1; bottom < sub2; bottom++)
	{
		if (array[bottom] < *pivot)
		{
			if (top < bottom)
			{
				swap(array + bottom, array + top);
				print_array(array, size);
			}
			top++;
		}
	}

	if (array[top] > *pivot)
	{
		swap(array + top, pivot);
		print_array(array, size);
	}

	return (top);
}

/**
 * lomuto_sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @left: The starting index of the array partition to order.
 * @right: The ending index of the array partition to order.
 *
 * Description: Uses the Lomuto partition scheme.
 */
void lomutoSort(int *array, size_t size, int sub1, int sub2)
{
	int partion;

	if (sub2 - sub1 > 0)
	{
		partion = lomuto_partn(array, size, sub1, sub2);
		lomutoSort(array, size, sub1, sub2 - 1);
		lomutoSort(array, size, part + 1, sub2);
	}
}

/**
 * quick_sort - sort array of ints
 * `		using the quicksort algorithm.
 * @array: array of integers.
 * @size: ize of the array.
 *
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomutoSort(array, size, 0, size - 1);
}
