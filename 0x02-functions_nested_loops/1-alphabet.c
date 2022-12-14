#include "main.h"
/**
 * prints_alphabet: print all alphabet in lowercase
 * Reurn: always 0 (success)
 */


int void_print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
	return (0);
}
