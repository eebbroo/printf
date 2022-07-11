#include "main.h"

/**
 * get_func - Selects the required function for the operation.
 *
 * @id: char
 *
 * Return: return pointer to function or Null.
 */

int (*get_func(const char id))(va_list argp)
{
	prv_t pr[] = {
		{"c", print_char}, {"s", print_str},
		{"b", print_bin}, {"d", print_dec},
		{"i", print_dec}, {"u", pr_un_int},
		{"o", print_octa}, {"x", print_hex},
		{"X", print_heX}, {"S", pr_non_prt},
		{"r", print_rev}, {"R", print_rot13},
		{"p", print_add}, {NULL, NULL},
	};
	const int len = 14;
	int i = 0;

	while (i < len)
	{
		if (id == pr[i].id)
			return (pr[i].f);
		i++;
	}
	return (NULL);
}

