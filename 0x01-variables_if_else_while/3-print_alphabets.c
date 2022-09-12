#include <stdio.h>
/**
* main - Print upper an lower case alphabet
* Description - Prints all alphabet first in Lower then Uppercase
* Return: Always 0 (Success)
*/
int main(void)
{
	char Lalpha;
	char Ualpha;

	for (Lalpha = 'a'; Lalpha <= 'z'; Lalpha++)
	{
		putchar(Lalpha);
	}
	for (Ualpha = 'A'; Ualpha <= 'Z'; Ualpha++)
	{
		putchar(Ualpha);
	}
	putchar('\n');
	return (0);
}
