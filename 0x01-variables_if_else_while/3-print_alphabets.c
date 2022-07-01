#include <stdio.h>

/**
 * main - Entry point
 * return: Always 0 (Success)
 */
int main(void)
{
	int lowAlpha;
	for (lowAlpha = 97; lowAlpha <= 122; lowAlpha++)
	{
		putchar(lowAlpha);
	}
	for (lowAlpha = 65; lowAlpha <= 90; lowAlpha++)
	{
		putchar(lowAlpha);
	}
	putchar(10);

	return (0);
}
