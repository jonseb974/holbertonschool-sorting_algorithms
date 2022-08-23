#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: pointer.
 * @size: size
 * Return: array in ascendig order
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j = 0;

	for (i = 0; i < size; i++)
	{
		size = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			swap(&array[i], &array[j]);
		}
	}
}

/**
 * swap - swap data in new list
 * @one: data unsorted_list
 * @two: data sorted_list
 *
 * Return: ascended list of data
 */
void swap(int *one, int *two)
{
	int tmp = *one;

	*one = *two;
	*two = tmp;
}
