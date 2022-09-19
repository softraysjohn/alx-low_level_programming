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
* swap_char - swap characters
* @a: first pointer
* @b: second
*
*/
void swap_char(char *a, char *b)
{
	int TempValue;

	TempValue = *a;
	*a = *b;
	*b = TempValue;
}

/**
* rev_string - reverses a string
* @s: The strng  to reverse
*
*/
void rev_string(char *s)
{
	int i, len;

	len = _strlen(s) - 1;
	for (i = 0; i < len / 2; i++)
		swap_char(s + i, s + len - i);
}

