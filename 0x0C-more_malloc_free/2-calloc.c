#include "main.h"

/**
 * set_val - copy char
 * @s: string
 * @c: character
 * @n: count
 * Return: string
 */
char *set_val(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *dst;

	if (nmemb == 0 || size == 0)
		return (NULL);
	dst = malloc(nmemb * size);

	if (dst == NULL)
		return (NULL);
	set_val(dst, 0, (nmemb * size));
	return (dst);
}

