#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * fibonacci - A function that generates and prints the Fibonacci
 *           sequence up to a specified number.
 *
 * @n: An integer representing the maximum number
 *     of Fibonacci numbers to generate.
 *
 * Return : Nothing (void).
 */
void fibonacci(int n)
{
	long i, previous_num, current_num, next_num;

	previous_num = 0;
	current_num = 1;

	for (i = 2; i <= n; i++)
	{
		next_num = previous_num + current_num;
		printf("%ld", next_num);
		previous_num = current_num;
		current_num = next_num;
		if (i != n)
			printf(", ");
	}
}
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	fibonacci(51);
	printf("\n");
	return (0);
}

