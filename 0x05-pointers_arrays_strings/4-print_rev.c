#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, str_length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		str_length++;
	}
	s = s + str_length - 1;

	for (; str_length > 0; str_length--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
