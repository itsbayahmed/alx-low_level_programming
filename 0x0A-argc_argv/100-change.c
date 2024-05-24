#include <stdio.h>
#include <stdlib.h>
/**
 * change - A helper function that calculate the minimum number of coins
 *  to make change for an amount of money.
 *
 * @money: A pointer to an integer that represnts the amount of money.
 * @coin: The value of the coin denomination.
 *
 * Return: The number of coins that can be made from the given amount of money.
 */
int change(int *money, int coin)
{
	int cents = 0;

	while (*money >= coin)
	{
		cents += 1;
		*money = *money - coin;
	}
	return (cents);
}
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

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		money = atoi(argv[1]);
		if (money < 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			cents += change(&money, 25);
			cents += change(&money, 10);
			cents += change(&money, 5);
			cents += change(&money, 2);
			cents += change(&money, 1);
		}
	printf("%d\n", cents);
	return (0);
}
}
