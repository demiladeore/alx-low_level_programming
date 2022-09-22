#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: string parameter1
 * @src: string parameter2
 * @n: parameter3
 * Return: string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

