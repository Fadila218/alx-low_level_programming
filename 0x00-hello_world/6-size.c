#include <stdio.h>
/**
 * main - start
 *
 * description - print the size of data types
 *
 * Return:always 0 (success)
 */
int main(void)
{
	printf("size of a char: %u byie(s)\n", (unsigned int)sizeof(char));
	printf("Size of an int: %u byte(s)\n", (unsigned int)sizeof(int));
	printf("Size of a long int: %u byte(s)\n", (unsigned int)sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", (unsigned int)sizeof(long long int));
	printf("size of a float: %u byte(s)\n", (unsigned int)sizeof(float));
	return (0);
}
