#include <stdio.h>
/**
 * main - Entry point.
 *
 * @argc: An integer that represent the number of command-line arguments
 *  passed to the program.
 *  @argv: An array of character pointers that contains the arguments
 *  passed to the program through the command-line.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
