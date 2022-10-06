#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len_1 = 0, len_2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len_1] != '\0')
	{
		len_1++;
	}

	while (s2[len_2] != '\0')
	{
		len_2++;
	}

	if (n > len_2)
	n = len_2;
	p = malloc((len_1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < len_1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (len_1 + n); i++)
	{
		p[i] = s2[i - len_1];
	}
	p[i] = '\0';

return (p);
}

