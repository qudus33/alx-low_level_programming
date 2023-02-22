#include "main.h"
/**
 * print_to_98 - program to print natural numbers from n to 98
 *
 */
void print_to_98(int n)
{
  int i;
  if (n <= 98)
  {
    for (i = n; i < 98; i++)
    {
        _putchar(i / 10 + '0');
        _putchar(i % 10 + '0');
        _putchar(',');
        _putchar(' ');
    }
  }
    else 
    {
      for (i = n; i > 97; i--)
      {
        _putchar(i / 10 + '0');
            _putchar(i % 10 + '0');
            if (i != 98) 
            {
                _putchar(',');
                _putchar(' ');
            }
      }
    }
  _putchar('9');
  _putchar('8');
  _putchar('\n');
}
