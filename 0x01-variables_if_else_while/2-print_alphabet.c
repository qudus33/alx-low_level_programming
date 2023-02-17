#include <stdio.h>

/**
 * main - print alphabet in lower case
 *
 * Return: always 0
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
