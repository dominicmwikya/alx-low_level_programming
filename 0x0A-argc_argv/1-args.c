#include <stdio.h>
#include "main.h"
/**
 * main - print thhe number of argument passed to program
 * @argc: number of aruments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
