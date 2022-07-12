#include "main.h"

/**
 * pr_bin - prints the binary representation of a number
 *
 * @argp: Arguments parameters
 *
 * Return: returns integer
 *
 */

int print_bin(va_list argp)
{
	unsigned int num = va_arg(argp, unsigned int);
	in count = 0;
	int *ptr = &count;

	return (cnvrt_to_bin(num, ptr));
}

/**
 * cnvrt_to_bin - converts decimal to binary
 *
 * @n: arguments parameter
 * @count: int pointer
 *
 * Return: return int
 */

int cnvrt_to_bin(unsigned int n, int *count)
{
	if (n / 2)
		cnvrt_to_bin(n / 2, count);
	*count += _putchar ((n % 2) + '0');
	return (*count);
}
