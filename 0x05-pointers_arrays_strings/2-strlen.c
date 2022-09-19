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

