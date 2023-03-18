#include<stdio.h>
#include<stdlib.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';
	char d = 'e';
	char f = 'q';

	while (c <= 'z')
	{
		if (c != d && c != f)
		putchar(c);
	}
	putchar('\n');
	return (0);
}
