#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 * Return: Always 1 (success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 100; ++a)
	{
		for (b = 0; b < 100; ++b)
		{
				if (a != b  && a < b)
				{
						putchar('0' + a / 10);
						putchar('0' + a % 10);
						putchar(' ');
						putchar('0' + b / 10);
						putchar('0' + b % 10);
					if (!(a == 98 && b == 99))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
	putchar('\n');
	return (0);
}
