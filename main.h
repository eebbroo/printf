#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *, ...);
int print_str(va_list);
char _putchar(char);

/** prv - struct typedef
 *
 * @id: character var.
 * @f: A function pointer
 */
typedef struct prv
{
	char id;
	int (*f)(va_list args);
}prv_t;
int (*get_function(const char))(va_list);
int pr_char(va_list);
int pr_bin(va_list);
int cnvrt_to_bin(unsigned int, int *);
int pr_dec(va_list);
int cnvrt_to_dec(int, int *);
int pr_un_int(va_list);
int cnvrt_to_un_int(unsigned int, int *);
int pr_octa(va_list);
int cnvrt_to_octa(unsigned int, int *);
int pr_hex(va_list);
int cnvrt_to_hex(unsigned int, int *);
int pr_heX(va_list);
int cnvrt_to_heX(unsigned int, int *);
int get_base_len(int, int);
int pr_non_prt(va_list);
int pr_rev(va_list);
int get_str_len(char *);
int pr_rot13(va_list);
int pr_ptr(va_list);

#endif
