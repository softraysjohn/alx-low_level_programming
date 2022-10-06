#include <stdlib.h>
#include <limits.h>
/**
* s_len - finds the length of a string
* @s: String
*
* Return: length
*/
unsigned int s_len(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (i < UINT_MAX && s[i] != '\0')
		++i;
	return (i);
}

/**
* string_nconcat - concatenation with no allocation
* @s1: First string
* @s2: second string
* @n: number of stuff from s2 (max)
*
* Return: pointer to destination
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len_1, len_2, i;
	char *dst;

	len_1 = s_len(s1);
	len_2 = s_len(s2);
	dst =  malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (dst == NULL)
		return (NULL);
	/*end-if*/
	i = 0;
	while (i < len_1 && s1[i] != '\0')
	{
		dst[i] = s1[i];
		++i;
	}
	len_1 = i;
	i = 0;
	while (s2[i] != '\0' && i < n && i < len_2)
	{
		dst[i + len_1] = s2[i];
		++i;
	}
	dst[i + len_1] = '\0';
	return (dst);
}

