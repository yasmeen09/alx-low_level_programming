#include "lists.h"

/**
 * list_len - shows the length of linked lists
 * @h: pointer to first node
 *
 * Return: size of list
*/

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
