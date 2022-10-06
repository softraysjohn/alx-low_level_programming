#include <stdlib.h>

/**
* malloc_checked - malloc that checks for fail
* @b: size_t
*
* Return: allocated pointer
*/

void *malloc_checked(unsigned int b)
{
	void *ret;

	ret = malloc(b);
	if (ret == NULL)
		exit(98);
	return (ret);
}

