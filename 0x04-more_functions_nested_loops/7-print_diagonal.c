#include "main.h"
/**
* print_diagonal - c-program entry point
* @n: command-line count
*
* Return: description
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; ++i)
	{
		for (j = 0; j <= i; ++j)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

}

