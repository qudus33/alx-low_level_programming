#include <stdio.h>
#include <main.h>

/**
 * main - print _putchar
 *
 * Return: 0
 */
int main(void)
{
char text[] = "_putchar";
int i = 0;
while (text[i] != '\0')
{
putchar(text[i]);
i++;
}
putchar('\n');
return (0);
}
