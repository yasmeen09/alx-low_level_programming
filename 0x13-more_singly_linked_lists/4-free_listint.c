#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 *
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

