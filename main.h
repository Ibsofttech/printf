#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct myStru - Struct op
 *
 * @ch: the format.
 * @myFun: funtion associated with structure
 */
struct myStru
{
	char ch;
	int (*myFun)(va_list);
};


/**
 * typedef struct myStru ptr1 - struct op
 *
 * @ch: the format.
 * @ptf_t: funtion associated with structure
 */
typedef struct myStru ptr1;

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
