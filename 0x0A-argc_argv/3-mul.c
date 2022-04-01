#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[argc - 1]);
		y = atoi(argv[argc - 2]);

		printf("%d\n", x * y);
		return (0);
	}
	else
	{
		printf("Error \n");
		return (1);
	}
}
