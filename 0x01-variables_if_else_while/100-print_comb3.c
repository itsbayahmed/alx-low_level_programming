#include<stdio.h>
#include<stdlib.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; ++a)
	{
		for (b = 1; b < 10; ++b)
		{
			if (a != b && a < b)
			{
				putchar('0' + a);
				putchar('0' + b);
				if (!(a == 8 && b == 9))
				{
					putchar(',');
				}
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
