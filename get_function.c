#include "main.h"
/**
 * get_function - Selects the correct function to perform operation.
 *
 * @s: argument indentifier
 * @index: index for argument indentifier
 *
 * Return: pointer to a function.
 */

int (*get_func(const char *s, int index))(va_list, char *, unsigned int)
{
	print_t pr[] = {
		{"c", print_chr}, {"s", print_string},
		{"i", print_int}, {"d", print_int},
		{"b", print_bnr}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex},
		{"X", print_upx}, {"S", print_usr},
		{"p", print_add}, {'r', pr_rev},
                {'R', pr_rot13}
	};
	const int len = 13;
	int i = 0;
	while (i < len)
	{
		if (id == prv[i].id)
		{
			return (prv[i].f);
		}
		i++;
	}
	return (NULL);
