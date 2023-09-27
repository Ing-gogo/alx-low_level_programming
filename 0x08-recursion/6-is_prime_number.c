#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number -Returns if a number is prime
 * @n: number to be checked
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checkif number is prime
 * @n: the number to be checked
 * @b: iteration times
 * Return: 1 or 0
 */
int check_prime(int n, int b)
{
	if (n <= 1)
		return (0);
	if (n % b == 0 && b > 1)
		return (0);
	if ((n / b) < b)
		return (1);
	return (check_prime(n, b + 1));
}
