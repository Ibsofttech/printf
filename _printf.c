#include "main.h"


/**
 * _printf - Printf function for alx project
 * @format: default format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, calc = 0, calc_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list my_list;
	char buff[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(my_list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buff[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buff, &buff_ind);
			/* write(1, &format[i], 1);*/
			calc_chars++;
		}
		else
		{
			print_buffer(buff, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, my_list);
			precision = get_precision(format, &i, my_ list);
			size = get_size(format, &i);
			++i;
			calc = handle_print(format, &i, my_list, buff,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			calc_chars += calc;
		}
	}

	print_buffer(buff, &buff_ind);

	va_end(list);

	return (calc_chars);
}

/**
 * print_buffer - Prints the contents of the buffer
 * @buff: Array of characters
 * @buff_ind: Index at which to add next chars, represents the length.
 */
void print_buffer(char buff[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buff[0], *buff_ind);

	*buff_ind = 0;
}

