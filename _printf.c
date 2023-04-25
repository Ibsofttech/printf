#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf alx project
 * @format: formatted output.
 * Return: Printed chars and strings.
 */
int _printf(const char *format, ...)
{
	int i, my_print = 0, my_chars = 0;
	int flg, width, precn, size, buff_ind = 0;
	va_list my_list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(my_list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flg = get_flags(format, &i);
			width = get_width(format, &i, my_list);
			precn = get_precision(format, &i, my_list);
			size = get_size(format, &i);
			++i;
			my_print = handle_print(format, &i, my_list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			my_chars += printed;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(my_list);

	return (my_chars);
}




void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}

