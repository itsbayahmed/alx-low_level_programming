#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * fibonacci_fun - A  function calculates the sum
 *    of even Fibonacci numbers up to a specified limit.
 *
 * @n:  An integer representing the maximum value
 *    for the Fibonacci numbers to be considered.
 *
 * Return : Nothing (void).
 */
void fibonacci_fun(int n)
{
	int i, previous_num, current_num, next_num, sum;

	previous_num = 0;
	current_num = 1;
	sum = 0;

	for (i = 2; i <= n; i++)
	{
		next_num = previous_num + current_num;
		if (next_num % 2 == 0)
		{
			sum += next_num;
		}
		previous_num = current_num;
		current_num = next_num;
	}
	printf("%d\n", sum);
}
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	fibonacci_fun(34);
	return (0);
}

