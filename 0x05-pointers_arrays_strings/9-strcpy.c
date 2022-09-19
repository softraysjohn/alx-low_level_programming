/**
* _strlen - like strlen
* @s: string
*
* Return: length
*/
int _strlen(char *s)
{
	int len = 0;

	while ('\0' != *(s++))
		++len;
	return (len);
}

/**
* _strcpy - like strcpy
* @dest: destination
* @src: source
*
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = _strlen(src);
	for (i = 0; i <= len; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}

