#include <stdio.h>
/**
 * main - Size
 * Return: 0(Success)
 */
int main(void)
{
	printf("Size of a char: %lu bytes", sizeof(char));
	printf("Size of an int: %lu bytes", sizeof(int));
	printf("Size of a long int: %lu bytes", sizeof(long int));
	printf("Size of a long long int: %lu bytes", sizeof(long long int));
	printf("Size of a float: %lu bytes", sizeof(float));
	return (0);
}
