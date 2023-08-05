#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main- prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of arguments
 * @argv: array of arugmnrts
 *
 * Return: 0 (Success), 1 (Eror)
 */
int main(int argc, char *argv[])
{
	int num_coins, j, result;
	int denominations[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_coins = atoi(argv[1]);
	result = 0;
	if (num_coins < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num_coins >= 0; j++)
	{
		while (num_coins >= denominations[j])
		{
			result++;
			num_coins -= denominations[j];
		}
	}
	printf("%d\n", result);
	return (0);
}
