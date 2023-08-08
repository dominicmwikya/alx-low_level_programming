#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - Duplicate to new memory space location
 * @str: char
 * Return: 0;
 */
char *_strdup(char *str)
{
	char *dominic;
	int i, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	dominic = malloc(sizeof(char) * (i + 1));
	if (dominic == NULL)
	{
		return (NULL);
	}
	for (r = 0; str[r]; r++)
	{
		dominic[r] = str[r];
	}
	return (dominic);
}

