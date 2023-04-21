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
	printf("Size of an int:%d byte(s)\n", sizeof(int));
	printf("size of a char:%d byte(s)\n", sizeof(char));
	printf("size of a float:%d byte(s)\n", sizeof(float));
	printf("Size of a long int:%d byte(s)\n", sizeof(long));
	printf("Size of a long long int:%llu byte(s)\n", sizeof(long long int));
	return (0);
}
