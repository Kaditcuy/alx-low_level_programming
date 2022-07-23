#include <stdio.h>
#include <stdlib.h>

/**
* main - Function that multiplies argumnts from command line
* @argc: Int argument
* @argv: Char argument of strings
*/
int main(int argc, char *argv[])
{
	int mul = 0;
	int num1 = 0, num2 = 0;

	if (argc > 1)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}