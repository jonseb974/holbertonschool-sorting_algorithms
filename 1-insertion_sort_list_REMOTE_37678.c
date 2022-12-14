#include "sort.h"
#include <stdio.h>

/**
 * swap - swap the nodes
 * @one: first node
 * @two: second node
 *
 * Return: no return
 */
void swap(listint_t *one, listint_t *two)
{
	if (one->prev)
		one->prev->next = two;
	if (two->next)
		two->next->prev = one;
	one->next = two->next;
	two->prev = one->prev;
	one->prev = two;
	two->next = one;
}
/**
 * insertion_sort_list - sort doubly-linked list
 * @list: pointer
 *
 * Return: no return
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (!list || !*list || !(*list)->next)
		return;
	i = (*list)->next;
	while (i)
	{
		j = i;
		i = i->next;
		while (j && j->prev)
		{
			if (j->prev->n > j->n)
			{
				swap(j->prev, j);
				if (!j->prev)
					*list = j;
				print_list((const listint_t *) *list);
			}
			else
				j = j->prev;
		}
	}
}
