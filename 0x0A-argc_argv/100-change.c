#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: An integer that represents the number of command-line arguments
 *  passed to the program.
 * @argv: An array of character pointers that contains the arguments
 *  passed to the program through the command-line.
 *
 * Return: Return 1 if not exactly one argument is passed to the program,
 *  otherwise it returns 0.
 */
int main(int argc, char *argv[])
{
	int cents = 0, money;

	money = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (money < 0)
	{
		printf("0\n");
	}
	else
	{
		while (money >= 25)
		{
			cents += 1;
			money = money - 25;
		}
		while (money >= 10)
		{
			cents += 1;
			money = money - 10;
		}
		while (money >= 5)
		{
			cents += 1;
			money = money - 5;
		}
		while (money >= 2)
		{
			cents += 1;
			money = money - 2;
		}
		cents += money;
		money = 0;
	}
	printf("%d\n", cents);
	return (0);
}
