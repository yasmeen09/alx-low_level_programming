#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to first node
 *
 * Return: size of list
*/

size_t listint_len(const listint_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);
}
