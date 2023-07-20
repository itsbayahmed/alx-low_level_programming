#include "main.h"

/**
 * prime - A function to check if a number is
 * prime or not.
 *
 * @n: The given number.
 * @i: Iterator.
 *
 * Return: 1 if n is prime, or 0 if it is not.
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
/**
 * is_prime_number - A function that checks if
 * a number is prime or not.
 *
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 if it is not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

