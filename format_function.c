#include "main.h"

/**
 * print_ch - Print a  characters (%c)
 * @my_list: Store the a list of characters
 * Return: num of parameters printed
 */
int print_ch(va_list my_list)
{
	int c = va_arg(my_list, int);

	return (_putchar(c));
}

/**
* print_str - print a string (%s)
* @ar_list: Store the a list of characters
* Return: num of parameters printed
*/
int print_str(va_list my_list)
{
	int i, count = 0;
	char *str;

	str = va_arg(my_list, char *);
	if (str == NULL)
		str = "(error)"

	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);

	return (count);
}
