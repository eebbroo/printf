#include "main.h"

/**
 * pr_char - prints a character
 *
 * @argp: Character argument
 *
 * Return: character
 */

int pr_char(va_list argp)
{
	return (_putchar(va_arg(argp, int)));
}
