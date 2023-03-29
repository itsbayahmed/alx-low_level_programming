#include "main.h"

/**
 * rev_string - A function that reverse a string.
 *
 * @s: The string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int length = 0;
	int i, j;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	i = 0;
	j = length - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
