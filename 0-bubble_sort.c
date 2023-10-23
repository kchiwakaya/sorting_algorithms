/*
 * File: 0-bubble_sort.c
 * Auth: Brennan D Baraban
 */

#include "sort.h"

/**
 * bubble_sort - sorts array of integers in ascending order.
 * @array: array of integers to sort.
 * @size: size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				/* Swap the two elements*/.
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);   
	}
  }
}
