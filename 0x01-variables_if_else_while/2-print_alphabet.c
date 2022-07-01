#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
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
