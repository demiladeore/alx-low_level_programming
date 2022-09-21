#include "main.h"

/**
 * _puts - function prints string, followed by a new line, to stdout
 * @str: a _pus  function aurgument
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
