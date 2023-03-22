#include "main.h"
/**
 * _isalpha - A function that check for alphabetic characters
 *
 * @c: the character to be checked
 *
 * Return: 1 if the character is alphabetic, or 0 if it is not.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
