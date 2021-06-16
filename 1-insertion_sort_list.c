#include "sort.h"

/**
* swap_nodes - swamps two nodes
* @list: linked list
* @nodeA: first node
* @nodeB: second node
*
* Return: nothing
*/
void swap_nodes(listint_t **list, listint_t *nodeA, listint_t *nodeB)
{
	listint_t *prevA, *nextB;

	if (nodeA == NULL || nodeB == NULL)
		return;

	prevA = nodeA->prev;
	nextB = nodeB->next;


	if (prevA) /* check if node A is the head node */
		prevA->next = nodeB;

	if (nextB)
		nextB->prev = nodeA;

	nodeA->next = nextB;
	nodeA->prev = nodeB;
	nodeB->next = nodeA;
	nodeB->prev = prevA;

	if (prevA == NULL)
		*list = nodeB;
}

/**
* insertion_sort_list - sorts a doubly linked list of integers
* in ascending order using the insertion sort algorithm
* @list: list to be sorted
*
* Return: nothing
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *prev, *current;

	if (list == NULL || (*list)->next == NULL)
		return;

	current = *list;
	while (current)
	{
		prev = current->prev;
		while (prev && prev->n > current->n)
		{
			swap_nodes(list, prev, current);
			print_list(*list);
			prev = current->prev;
		}
		current = current->next;
	}
}
