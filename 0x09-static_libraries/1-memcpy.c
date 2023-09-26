#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @src: memory area to copy bytes from
 * @dest: memory area to past bytes to
 * @n: the bytes desired to be cpoied
 *
 * Return: copied memory with n bytes changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int m = n;

	for (; t < m; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}
