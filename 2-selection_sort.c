#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: pointer.
 * @size: size
 * Return: array in ascending order
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int tmp;

	if (!array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{

		for (j = size - 1, min_idx = i + 1; j > i; j--)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		}
		if (array[i] > array[min_idx])
		{
			tmp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = tmp;
			print_array(array, size);
		}
	}
}
