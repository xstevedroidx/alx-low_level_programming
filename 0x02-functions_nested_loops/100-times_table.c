#include "main.h"


   void print_times_table(int n)
{
	int i, j, a;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				a= i * j;

				if (a <= 99)
					_putchar(' ');
				if (a <= 9)
					_putchar(' ');

				if (a >= 100)
				{
					_putchar((a / 100) + '0');
					_putchar(((a / 10)) % 10 + '0');
				}
				else 
                if (a <= 99 && a >= 10)
				{
					_putchar((a / 10) + '0');
				}
				_putchar((a % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
