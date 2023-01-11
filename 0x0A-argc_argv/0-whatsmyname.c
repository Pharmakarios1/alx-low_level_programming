#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is a function to print its name
 * @argc: argc parameter to count argv elements
 * @argv: an array of a command listed
 * Exit: (EXIT_SUCCESS)
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
