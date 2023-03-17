#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	long int l;
	long long int g;
	float f;

	printf("Size of a char: %c byte(s)", (unsigned long)sizeof(c));
	printf("Size of an int: %d byte(s)", (unsigned long)sizeof(i));
	printf("Size of a long int: %ld byte(s)", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lld byte(s)", (unsigned long)sizeof(g));
	printf("Size of a float: %f byte(s)", (unsigned long)sizeof(f));
	return (0);
}
