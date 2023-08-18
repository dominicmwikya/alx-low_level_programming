#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name using function pointer
 * @name: input name.
 * @f: function pointer.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
