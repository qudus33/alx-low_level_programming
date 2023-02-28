#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - print strings in reverse
 * @s: string to print.
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i;

	for (i = 0; i < length / 2; i++)
	{
	char temp = s[i];

	s[i] = s[length - 1 - i];
	s[length - 1 - i] = temp;
	}
}
