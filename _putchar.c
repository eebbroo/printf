#include "main.h"

/**
 * _putchar - Function that prints a character
 *
 * @ch: character argument
 *
 * Return: return an int-type
 */

int _putchar(int ch)
{
	return (write(1, &ch, 1));
}
