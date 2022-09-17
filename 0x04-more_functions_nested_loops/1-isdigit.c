#include "main.h"

/**
* _isdigit - Function checks if argument is a digit
* @c: argument taken by the function
* Return: either 1 or 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
