#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer of the first node
 * @n: value for new node
 *
 * Return: pointer to new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	listint_t *node = *head;

	if (!head || !new)
		return (NULL);

	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
		while (node->next)
			node = node->next;

		node->next = new;

	return (new);
}
