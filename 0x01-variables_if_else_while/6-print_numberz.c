#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; ++a)
	{
		putchar('0'+ a);
	}
	putchar('\n');
	return (0);
}

