#include <stdio.h>
/**
 * main - printing numbers separated by a comma
 *
 * Return: always 0
 */
int main(void)
{
	int c;

	for (c = 0 ; c < 10 ; c++)
	{
		putchar(c + '0');
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
