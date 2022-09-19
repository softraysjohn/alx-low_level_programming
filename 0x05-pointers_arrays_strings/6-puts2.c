#include "main.h"
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
* puts2 - prints every other character
* @str: command-line count
*
*/
void puts2(char *str)
{
	int i, len = _strlen(str);

	for (i = 0; i < len; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}

