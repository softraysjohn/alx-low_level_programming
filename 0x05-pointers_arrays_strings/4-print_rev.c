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
* print_rev - prints a string in erverse
* @s: String to print
*
*/
void print_rev(char *s)
{
	int len = _strlen(s), i;

	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}

