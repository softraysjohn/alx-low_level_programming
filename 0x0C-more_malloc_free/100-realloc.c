#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tmp, *dst;
	unsigned int i;

	if (ptr != NULL)
		tmp = ptr;
	else
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0); 
	}
	dst = malloc(new_size);
	if (dst == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		dst[i] = tmp[i];
	}
	free(ptr);
	return (dst);
}

