#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Sum all values passed as an argument
 * @n: number of value to be passed
 * Return: Sum of all arguments passed
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list args;
		unsigned int i, sum;

		va_start(args, n);
		sum = 0;

		for (i = 0; i < n; i++)
			sum += va_arg(args, unsigned int);

		va_end(args);
		return (sum);
	}

}
