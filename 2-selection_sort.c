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
	unsigned int step, i = 0;

	for (step = 0; step < size; step++)
	{
		int min_idx = step;

		for (i = step + 1; i < size; i++)
		{
			if (array[i] < array[min_idx])
				min_idx = i;
		}
		swap(&array[min_idx], &array[step]);
	}
}

/**
 * swap - swap data in new list
 * @one: data unsorted_list
 * @two: data sorted_list
 *
 * Return: data swaptted
 */
void swap(int *one, int *two)
{
	int tmp = *one;

	*one = *two;
	*two = tmp;
}
