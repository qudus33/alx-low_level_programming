#ifndef MYHEADER_H
#define MYHEADER_H
#include <stdio.h>

/**
 * print_alphabet - print lowercase alphabet
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

#endif /* MYHEADER_H */
