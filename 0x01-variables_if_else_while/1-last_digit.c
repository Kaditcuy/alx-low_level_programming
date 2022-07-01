#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main-entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last Digit of %d is ", n);
	if (n > 5)
	{
		printf("and %d is greater than 5", n);
	}
	if (n == 0)
	{
		printf("and is 0");
	}
	if (n < 6 && n != 0)
	{
		printf("and %d is less than 6 and not 0", n);
	}
	printf("\n");

	return (0);
}
