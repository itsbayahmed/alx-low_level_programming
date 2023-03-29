 #include "main.h"
/**
 * puts2 - A function that prints every other character
 *  of a string, starting with the first character.
 *
 *  @str: The string.
 *
 *  Return: void.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	i++;
	}
	_putchar('\n');
}
