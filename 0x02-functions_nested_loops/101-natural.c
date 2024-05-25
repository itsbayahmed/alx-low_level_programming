#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_of_multiples - A function that computes and prints
 *  the sum of all the multiples of 3 or 5 less than a given number.
 *
 *  @n: The given number.
 *
 * Return: 0 (Always success)
 */

int sum_of_multiples(int n)
{
	int i = 0;
	int result = 0;

	while (i < n)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
		result += i;
	i++;
	}
	printf("%d\n", result);
	return (0);
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	sum_of_multiples(1024);
	return (0);
}
