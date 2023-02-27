#include <stdio.h>
#include "main.h"
/**
 * _puts - print a string
 * @str: string to print
 *
 * Return : always 0
 */
void _puts(char *str)
{
	while(*str != '\0')
	{
		putchar("%c", *str);
		str++;
	}
	putchar("\n");

	return (0);
}
