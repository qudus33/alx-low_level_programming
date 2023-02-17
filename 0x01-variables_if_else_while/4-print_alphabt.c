#include <stdio.h>

/**
 * main - skip e and q and print remaining alphabet
 *
 * Return: always 0
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter == 'e')
{
letter++;
}
else if (letter == 'q')
{
letter++;
}
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
