#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order usin Bubble sort
 * algorithm
 * @array: Pointer to the array to sort
 * @size: Size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int temp, swapped;
	size_t i, j = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				print_array(array, size);

				swapped = 1;
			}
		}

		if (swapped == 0)
			break;
	}
}
