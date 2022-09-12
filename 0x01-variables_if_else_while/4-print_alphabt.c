#include <stdio.h>
/**
* main - Print upper an lower case alphabet
* Description - Prints all alphabet first in Lower then Uppercase
* Return: Always 0 (Success)
*/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
		else
			continue;
	}

	putchar('\n');
	return (0);
}
