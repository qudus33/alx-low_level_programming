#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the c character to stdout
 * @c: The character to print
 *
 * Return: 1 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
