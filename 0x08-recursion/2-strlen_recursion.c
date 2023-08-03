#include "main.h"
/**
 *  _strlen_recursion - Returns string length
 *  @s: Input string
 *  Return : String length
 */
int  _strlen_recursion(char *s)
{
	int longif = 0;

	if (*s)
	{
		longif++;
		longif +=  _strlen_recursion(s + 1);
	}
	return (longif);
}
