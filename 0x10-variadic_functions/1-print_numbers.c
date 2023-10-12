#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints number by number
 * @separator: string to be printed betweeen numbers
 * @n: number of integers passed to the function
 * @...: variable numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list dig;
	unsigned int index;

	va_start(dig, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(dig, int));
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(dig);
}
