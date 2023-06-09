#include "sort.h"

/**
 * bubble_sort - sorts array useing bubble algo
 * @array: pointer to array to sort
 * @size: size of array to print
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
}
/**
 * swap - swaps two int pointers
 * @a: value to attach to temp
 * @b: value to replace @a
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
