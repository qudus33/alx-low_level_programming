#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name
 * @argc: count the argument passed
 * @argv: gets the argument passed
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
