#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 *main - print a random number
 *
 *
 * return: 0 on sucess
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d", n);
		printf(" is greater than zero\n");
	}
	else if (n == 0)
	{
		printf("%d", n);
		printf(" is zero\n");
	}
	else
	{
		printf("%d", n);
		printf(" is negative\n");
	}
	return (0);
}
