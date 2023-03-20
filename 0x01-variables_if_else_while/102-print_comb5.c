#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 * Return: Always 1 (success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; ++a)
	{
		for (b = 0; b < 10; ++b)
		{
			for (c = 0; c < 10; ++c)
			{
				for (d = 1; d < 10; ++d)
				{
					if (a <= 9 && b <= 9 && b < d && a <= c)
					{
						putchar('0' + a);
						putchar('0' + b);
						putchar(' ');
						putchar('0' + c);
						putchar('0' + d);
					if (!(a == 9 && b == 8))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
