#include "main.h"

/**
 * pr_dec - prints the decimal representation of a number
 *
 * @argp: Arguments
 *
 * Return: return int
 */

int print_dec(va_list argp)
{
	int num = va_arg(argp, unsigned int);
	int count = 0;
	int *ptr = &count;
	
	if (num < 0)
		count += _putchar('-');
	return (cnvrt_to_dec(num, ptr));
}

/**
 * cnvrt_to_dec - converts to decimal
 * 
 * @n: integer parameter
 * @count: int pointer
 *
 * Return: int
 */

int cnvrt_to_dec(int n, int *count)
{
       if (n < 0 && n == INT_MIN)
       {
	       unsigned int num = n * -1;
	       
	       if (num / 10)
		       cnvrt_to_dec(num / 10, count);
	       *count += _putchar((num % 10) + '0');
	       return (*count);
       }
       if (n < 0)
	       n *= -1;
       if (n / 10)
	       cnvrt_to_dec(n / 10, count);
       *count += _putchar((n % 10) + '0');
       return (*count);
}
