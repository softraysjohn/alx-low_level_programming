#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the current program (self)
 * @argc: Number of  arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);

return (0);
}
