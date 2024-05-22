#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point.
 *
 * @argc: An integer that represent the number of command-line arguments
 *  passed to the program.
 * @argv: An array of character pointers that contains the arguments
 *  passed to the program through the command-line.
 *
 * Return: 0 (success) if two numbers are passed to program.
 *      or 1 if less than two numbers are passed to it.
 */

int main(int argc, char *argv[])
{
	int i;
	int multiply = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			multiply *= atoi(argv[i]);
		}
		printf("%d\n", multiply);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
