#include "main.h"

/**
 * _strchr - locates character string
 * @s: array of string
 * @c: string to check
 * Return: 0 for success
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
