#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments
 * @argc: number of argument passed
 * @argv: gets the argument passed
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 1)
	{
		argc = argc - 1;
		printf("%d\n", argc);
	}
	else
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
