#include <stdio.h>
#include <stdlib.h>

/**
 * main - multuply two arguments
 * @argc: number of argument passed
 * @argv: gets the argument passed
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	if ((argc == 1) || (argc == 2) || (argc > 3))
	{
		printf("Error\n");
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	return (0);
}
