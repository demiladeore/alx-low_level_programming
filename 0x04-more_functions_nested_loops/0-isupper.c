#include "main.h"

/**
* _isupper - checks for a uppercase character and returns either 1 or 0
* Return: Either 1 or 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
