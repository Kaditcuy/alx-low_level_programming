#include <stdio.h>

/**
 * main - Entry point
 * return: Always 0 (Success)
 */
int main(void)
{
	char lowAlpha;
	for (lowAlpha = 'a'; lowAlpha <= 'z'; lowAlpha++)
	{
		if (lowAlpha != 'q' && lowAlpha != 'e')
		{
		putchar(lowAlpha);
		}
	}
	putchar(10); /*ASCII code for new line*/

	return (0);
}
