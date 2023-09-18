#include "main.h"
/**
 * print_array - prints elements of an array
 * @a:array used
 * @n: number of elements in an array
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0 ; b < n ; b++)
	{
		printf("%d", a[b]);
		if (b < n - 1)
			printf(", ");
	}
	printf("\n");
}

