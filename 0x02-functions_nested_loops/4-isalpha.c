#include "main.h"
/**
 * _isalpha - Program to print
 * @c: the character to be chacked
 * Return: 1 if it is, and 0 if  otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
