#include <stdio.h>

/**
 * main - Entry point
 * a program that prints the alphabet in lowercase,
 * return: Always 0 (Success)
 */
int main(void)
{
	int lowAlpha;

	for (lowAlpha = 97; lowAlpha <= 122; lowAlpha++)
	{
		putchar(lowAlpha);
	}
	putchar(10);

	return (0);
}
