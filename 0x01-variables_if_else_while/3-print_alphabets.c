#include<stdio.h>
#include<stdlib.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c1 = 'a';
	char c2 = 'A';

	while (c1 <= 'z')
	{
	putchar(c1);
	c1 = c1 + 1;
	}
	while (c2 <= 'Z')
	{
	putchar(c2);
	c2 = c2 + 1;
	}
	putchar('\n');
	return (0);
}
