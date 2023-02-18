#include <stdio.h>

/**
 * main - print all base 10 numbers
 *
 * Return: output 0
 */
int main(void)
{
int number = 0;
while (number < 10)
{
putchar(number + '0');
number++;
}
putchar('\n');
return (0);
}
