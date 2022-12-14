#include "main.h"
/**
 * print_alphabet - entry point
 * Description: A function that prints alphabets in lowercase
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
