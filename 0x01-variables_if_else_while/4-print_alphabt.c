#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * main- Prints the alphabet without q and e.
 * 
 * Return: Alwats 0 (Success)
 */
int main(void)
{
	int i;
	
	for(1=97; i<123; i++)
	{
		if(i !=101 && i !=113)
		{
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}