#include "main.h"
/**
* _printf - this is the  main function to print on the console
* @format: array to print and check the type of input
* Return: to count the number of characters printed
**/
int _printf(const char *format, ...)
{
	int count = -1;

	if (format != NULL)
	{
		int i;
		va_list my_list;
		int (*op)(va_list);

		va_start(my_list, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		count = 0;

		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count += _putchar(format[i]);
					i++;
				}
				else if (format[i + 1] != '\0')
				{
					op = get_func(format[i + 1]);
					count += (op ? op(my_list) : _putchar(format[i]) + _putchar(format[i + 1]));
					i++;
				}
			}
			else
				count += _putchar(format[i]);
		}
		va_end(my_list);
	}

	return (count);
}
