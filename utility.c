#include "sort.h"
/**
 * swap - swaps two integers in an array.
 * @a:first integer.
 * @b:second integer.
 */
void swap(int *a, int *b)
{
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
}
