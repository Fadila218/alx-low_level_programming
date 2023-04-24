#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry
 *
 * description - a random number to the variable n each time it is executed
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (digit > 0)
		printf("%i is posetive \n", n);
	else if (n == 0)
		printf("%i is zero \n", n);
	else
		printf("%i is negative \n", n);
	return (0);
}
