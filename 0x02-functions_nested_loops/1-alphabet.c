#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet - check the code
 *
 * Return: 0
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
}
int main(void)
{
print_alphabet();
putchar('\n');
return (0);
}
