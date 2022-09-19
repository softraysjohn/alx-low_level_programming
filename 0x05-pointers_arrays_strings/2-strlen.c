#include "main.h"
/**
* _puts - prints string and new line
* @str: String
*
*/
void _puts(char *str)
{
	while ('\0' != *(str))
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

