#include "sort.h"

/**
 * swap - function that do the swapping.
 * @list: ptr to the head of the  doubly linked list.
 * @node1: ptr to the previos node.
 * @node2: ptr to the current node.
 */
void swap(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*list = node2;

	if (node2->next != NULL)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}

/**
 * insertion_sort_list - sorting a doubly linked list
 * @list: ptr to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current_node, *next_node, *previous_node;

	if (*list == NULL || list == NULL || (*list)->next == NULL)
	{
		return;
	}

	current_node = (*list)->next;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		previous_node = current_node->prev;

		/* If I need a swap */
		while (previous_node != NULL && previous_node->n > current_node->n)
		{
			swap(list, previous_node, current_node);
			print_list(*list);
			previous_node = current_node->prev;
		}

		/* If no swap needed */
		current_node = next_node;
	}
}
