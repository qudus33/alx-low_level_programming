#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments
 * @argc: count the argument passed
 * @argv: gets the argument passed
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
