#ifndef MYHEADER_H
#define MYHEADER_H

/**
 * print_alphabet - print lowercase alphabet
 */
int putchar(int c);
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
