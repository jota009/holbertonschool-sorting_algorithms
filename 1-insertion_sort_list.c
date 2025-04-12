#include "sort.h"

/**
 * sorted_insert - Function to insert a node in sorted order
 * @sorted: Double pointer to the head of a sorted linked list
 * @new_node: Pointer to the new node to insert in link list
 */

void sorted_insert(listint_t **sorted, listint_t *new_node)
{
	listint_t *current;

	if (*sorted == NULL || (*sorted)->n >= new_node->n)
	{
		new_node->next = *sorted;
		*sorted = new_node;
	}
	else
	{
		current = *sorted;

		while (current->next != NULL && current->next->n < new_node->n)
		{
			current = current->next;
		}
		new_node->next = current->next;
		current->next = new_node;
	}

	print_list(*sorted);
}


/**
 * insertion_sort_list - sorts doubly linked list
 * ascending using Insertion sort
 * @list: double pointer to the linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev_node;

	if (list == NULL || *list == NULL)
	{
		return;
	}

	current = *list;

	while (current != NULL)
	{

		while (current->prev != NULL && current->n < current->prev->n)
		{
			prev_node = current->prev;

			if (prev_node->prev != NULL)
			{
				prev_node->prev->next = current;
			}
			current->prev = prev_node->prev;

			prev_node->next = current->next;

			if (current->next != NULL)
				current->next->prev = prev_node;

			prev_node->prev = current;
			current->next = prev_node;

			if (current->prev == NULL)
				*list = current;

			print_list(*list);
		}
		current = current->next;
	}
}
