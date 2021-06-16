#include "sort.h"

/**
* swap_nodes - swamps two nodes
* @list: linked list
* @nodeA: first node
* @nodeB: second node
*
* Return: nothing
*/
void swap_nodes(listint_t ** list, listint_t *nodeA, listint_t *nodeB)
{
   listint_t *nextB, *prevA;

   if (nodeA == NULL || nodeB == NULL)
    return;

    nextB = nodeB->next;
    prevA = nodeA->prev;

   if (prevA)
    prevA->next = nodeB;

  if (nextB)
    nextB->prev = nodeA;

    nodeA->next = nextB;
    nodeA->prev = nodeB;
    nodeB->next = nodeA;
    nodeB->prev = prevA;

    if (!prevA)
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
	listint_t *sortedNode, *currentNode;

	currentNode = (*list)->next;

	while (currentNode)
	{
		sortedNode = *list;
		while (currentNode->n < sortedNode->n)
		{
			sortedNode = *list;
			swap_nodes(list, sortedNode, currentNode);
			print_list(*list);
			sortedNode = sortedNode->next;
		}
		currentNode = sortedNode->next;
	}
}
