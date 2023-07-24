#include "main.h"
/**
 * _strlen - return length of a string.
 * @c: string to check find length
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
