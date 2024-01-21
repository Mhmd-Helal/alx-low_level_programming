#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
        int i, j, mul;

        for (i = 0; i < 10; i++)
        {
                for (j = 0; j < 10; j++)
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
