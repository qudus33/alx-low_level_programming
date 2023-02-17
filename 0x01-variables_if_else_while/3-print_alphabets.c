#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print a to z in upper and lowercase
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
char lower = 'a';
char upper = 'A';
while (lower <= 'z')
{
putchar(lower);
lower++;
}
while (upper <= 'Z')
{
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}
