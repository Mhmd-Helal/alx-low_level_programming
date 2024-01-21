#include "main.h"
/**
 * print_ times_table -  prints the 9 times table, starting with 0.
 *
 */
void print_times_table(int n)
{
        int i, j, mul, pro;
	if (n > 15 || n < 0)
		return;
        for (i = 0; i < n + 1; i++)
        {
                for (j = 0; j < n + 1; j++)
                {
                        mul = i * j;
                        if (j == 0)
                                _putchar('0');
			else if (mul > 99)
			{
				pro = mul % 100;
				_putchar(',');
				_putchar(' ');
				_putchar(mul / 100 + '0');
				_putchar(pro / 10 + '0');
				_putchar(pro % 10 + '0');

			}	
			else if (mul > 9)
                        {
                                _putchar(',');
                                _putchar(' ');
				_putchar(' ');
                                _putchar(mul / 10 + '0');
                                _putchar(mul % 10 + '0');
                        }	
                        else
                        {
                                _putchar(',');
                                _putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
		}
		_putchar('\n');
	}
}

