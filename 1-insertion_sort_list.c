#include "sort.h"

/**
 * insertion_sort_list - sorts a Doubly Linked List of integers in ins sort
 * @list: doubly linked list
 * Return: no return
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *pointer, *tmp;

	if (list == 0)
		return;

	pointer = *list;

	while (pointer != NULL)
	{
		while (pointer->next && (pointer->n > pointer->next->n))
		{
			tmp = pointer->next;
			pointer->next = tmp->next;
			tmp->prev = pointer->prev;

			if (pointer->prev)
				pointer->prev->next = tmp;

			if (tmp->next)
				tmp->next->prev = pointer;

			pointer->prev = tmp;
			tmp->next = pointer;

			if (tmp->prev)
				pointer = tmp->prev;
			else
				*list = tmp;

			print_list(*list);
		}
		pointer = pointer->next;
	}
}
