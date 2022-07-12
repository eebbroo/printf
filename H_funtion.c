#include "main.h"

/**
 * get_len - Gets the length
 *
 * @n: int
 * @b: int
 *
 * Return: return base length
 */
int get_len(int n, int b)
{
	int len = 0;
	
	while (n > 0)
	{
		n /= b;
		len++;
	}
	return (len);
}
