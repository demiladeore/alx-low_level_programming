#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*main - print last digit stored in n
*Description: indictes the equality of n last digit
*Return: Always 0 (Success)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is %d", n, n % 10);
	(n % 10) > 5 ? printf(" and is greater than 5\n")
	: (n % 10) < 6 && (n % 10) != 0 ? printf(" and is less than 6 and not 0\n")
	: printf(" and is 0\n");
	return (0);
}
