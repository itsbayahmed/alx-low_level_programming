#include "main.h"

/**
 * sqrt_fun - A function to find the natural square root
 * of a given number.
 *
 * @n: The number.
 * @i: Iterator.
 *
 * Return: The natural square root of n.
 */
int sqrt_fun(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (sqrt_fun(n, i + 1));
}

/**
 * _sqrt_recursion - Calculate the natural square root
 * of a number.
 *
 * @n: The given number.
 *
 * Return: The natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_fun(n, 0));
}
