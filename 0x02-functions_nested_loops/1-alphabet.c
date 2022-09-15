#include "main.h"

/**
 * print_alphabet - prints alohabets in lower case followed by newline
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
