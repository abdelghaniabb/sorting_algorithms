#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: the list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *curser, *tmp;

	if (list == NULL)
		return;

	current = (*list);
	while (current != NULL)
	{
		curser = current;
		current = current->next;
		while (curser->prev != NULL && curser->prev->n > curser->n)
		{
			tmp = curser->prev;
			tmp->next = curser->next;
			curser->prev = tmp->prev;
			if (tmp->prev)
				tmp->prev->next = curser;
			else
				*list = curser;
			if (curser->next)
				curser->next->prev = tmp;
			curser->next = tmp;
			tmp->prev = curser;

			print_list(*list);

			if (curser->prev == NULL)
				break;
		}
	}
}

