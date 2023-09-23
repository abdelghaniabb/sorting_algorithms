#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *curser;

	current = (*list)->next;
	while (current != NULL)
	{
		if (current->n < current->prev->n)
		{
			curser = current;
			
}

