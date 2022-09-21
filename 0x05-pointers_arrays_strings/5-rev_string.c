#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string parameter
 */
void rev_string(char *s)
{
	char a;
	int b, length1, length2;

	length1 = 0;
	length2 = 0;

	while (s[length1] != '\0')
		length1++;

	length2 = length1 - 1;
	for (b = 0; b < length1 / 2; b++)
	{
		a = s[b];
		s[b] = s[length2];
		s[length2] = a;
		length2 -= 1;
	}
}
