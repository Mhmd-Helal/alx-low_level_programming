#include "main.h"
/**
 * print_ times_table -  prints the 9 times table, starting with 0.
 *
 */
void print_times_table(int n)
{
        int i, j, mul;
	if (n > 15 || n < 0)
		return;
        for (i = 0; i < n; i++)
        {
                for (j = 0; j < n; j++)
                {
                        mul = i * j;
                        if (j == 0)
                                _putchar('0');
                        else if (mul > 9)
                        {
                                _putchar(',');
                                _putchar(' ');
                                _putchar(mul / 10 + '0');
                                _putchar(mul % 10 + '0');
                        }
                        else
                        {
                                _putchar(',');
                                _putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
		}
		_putchar('\n');
	}
}

