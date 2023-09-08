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
 * Return: Return 1 if the number contains symbols that are not digits,
 * otherwise 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > -1)

			{
				sum += atoi(argv[i]);
		}
			else if (atoi(argv[i]) < 0)
			{
				return (-1);
			}

			if (*argv[i] >= 'a' && *argv[i] <= 'z')
			{
				printf("Error\n");
				return (1);
			}

		}

				printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
