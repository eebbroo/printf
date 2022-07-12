#include "main.h"

/**
 * _putchar - Function that prints a character
 *
 * @ch: character argument
 *
 * Return: return an int-type
 */

char _putchar(char ch)
{
	return (write(1, &ch, 1));
}
