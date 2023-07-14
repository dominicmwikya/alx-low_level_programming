#include<stdio.h>

/**
 * main -Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerCase[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lowerCase[i]);
	}
	putchar('\n');
	return (0);
}
