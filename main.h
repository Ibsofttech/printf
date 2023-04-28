#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct op - Struct op
 *
 * @c: the format.
 * @f: funtion associated with structure
 */

struct op
{
	char *c;
	int (*f)(va_list);
};

/**
 * typedef struct myStru ptr1 - struct op
 *
 * @c: the format.
 * @op_t: funtion associated with structure
 */
typedef struct op op_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list ar_list);
int (*get_func(char s))(va_list ar_list);
int print_s(va_list ar_list);
int print_d(va_list ar_list);
int print_i(va_list ar_numlist);
int print_b(va_list binary_list);
int print_u(va_list ar_list);
int print_o(va_list ar_list);
int print_x(va_list ar_list);
int print_X(va_list ar_list);


#endif
