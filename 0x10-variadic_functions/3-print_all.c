#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: list of arguments passed to the function
 * @...: variable arguments
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *str, *ab = "";

	va_list diff;

	va_start(diff, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", ab, va_arg(diff, int));
					break;

				case 'i':
					printf("%s%d", ab, va_arg(diff, int));
					break;
				case 'f':
					printf("%s%f", ab, va_arg(diff, double));
					break;
				case 's':
					str = va_arg(diff, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", ab, str);
					break;
				default:
					a++;
					continue;
			}
			ab = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(diff);
}
