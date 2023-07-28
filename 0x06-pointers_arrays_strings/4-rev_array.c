#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: number of array elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
    int i;
    int tmp;

    for (i = 0; i < n / 2; i++)
    {
        tmp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = tmp;
    }
}

