#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps two intergers
 * @a: first interger
 * @b: second nterger
 *
 * Return: 0 always
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
