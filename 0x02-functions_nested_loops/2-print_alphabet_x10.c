#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the a;phabet, in lowercase,
 * followed by a new line
 *
 * this was prepared by Akhigbe Blessed on 13/12/2022
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 0;

	while (i < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
