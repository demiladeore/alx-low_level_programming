#include <stdio.h>
/**
* main - main function
* Description - Function that list all alphabes in lowercase
* Return: Always 0 (Success)
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
