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
	printf("size of a char: %u byie(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
