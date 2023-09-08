#include <stdio.h>
/**
 * main - Entry point.
 *
 * @argc: An integer that represent the number of command-line arguments
 *  passed to the program.
 * @argv: An array of character pointers that contains the arguments
 *  passed to the program through the command-line.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

