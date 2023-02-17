#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
for (char c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (char C = 'A'; C <= 'Z'; C++)
{
putchar(C);
}
putchar('\n');
return (0);
}

