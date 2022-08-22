#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap- function that swap
 * integers in ascending order using bubble sort.
 * @xpt: pointer to int
 * @ypt: pointer to int
 *
 * Return: sorting list
 */


void swap(int *xpt, int *ypt)
{
	int temp = *xpt;
	*xpt = *ypt;
	*ypt = temp;
}

/**
 * bubble_sort- function that sorts an array of
 * integers in ascending order using bubble sort.
 * @array: pointer
 * @size: size
 * Return: sorting list
 */

void bubble_sort(int *array, size_t size)
{
	int i, j;

	for (i = 0; i < size; i++)
		for (j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
}


/**
 * printArray - function that sorts an array of
 * integers in ascending order using bubble sort.
 * @arr: array
 * @size: size
 * Return: sorting list
 */

void printArray(int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
size_t n = sizeof(array) / sizeof(array[0]);

print_array(array, n);
printf("\n");
bubble_sort(array, n);
printf("\n");
print_array(array, n);
return (0);
}
