#include "main.h"
#include <unistd.h>
/**
 * _putchar -werites the charatcer c to stdout
 * @c: the character to write
 *
 * Return: On success 1, on errno is set
 * appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
