#include "main.h"
/**
 * main - prints_alphabet: print all alphabet in lowercase
 *
 * Return: zero
 */
int void_print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
	return (0);
}
