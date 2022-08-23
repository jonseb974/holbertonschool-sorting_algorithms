#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: pointer
 * @size: number
 *
 * Return: array in ascendig order
 */

void selection_sort(int *array, size_t size)
{
	size = 0;

	for (int i = 0; i < size; i++)
	{
		size = i;

		for (int j = i + 1; j < size; j++)
		{
			if (array[size] > array[j])
			{
				size = j;
			}
		} if (i != size)
		{
			swap (array, i, size);
		}
	}

}

/**
 * swap - swap data in new list
 * @arr: empty list
 * @one: data
 * @two: data
 *
 * Return: order list of data
 */
void swap(int arr[], int one, int two)
{
	int tmp = arr[one];
	arr[one] = arr[two];
	arr[two] = tmp;
}
