#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limit.h>
#include <unistd.h>

/**
 * struct ptf - flag / flag object
 *
 * @ch: flag
 * @ptr: var function
 */

struct ptf
{
	char *ch;
	int (ptr)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct ptf ptf_t - flag / flag object
 *
 * @ch: flag
 * @ptr: var function
 */
typedef struct ptf ptf_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list my_list);
int (*get_func(char s))(va_list my_list);
int print_s(va_list my_list);
int print_d(va_list my_list);
int print_i(va_list my_numlist);
int print_b(va_list binary_list);
int print_u(va_list my_list);
int print_o(va_list my_list);
int print_x(va_list my_list);
int print_X(va_list my_list);

#endif
