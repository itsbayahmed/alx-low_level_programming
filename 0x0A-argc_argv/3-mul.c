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
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int multiply = 1;

	if (argc > 1)
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



