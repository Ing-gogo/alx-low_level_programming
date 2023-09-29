#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result of a multiplication
 * @argc: argument count
 * @argv:argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x = 0, y = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
