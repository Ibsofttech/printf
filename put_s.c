#include "main.h"

/**
 * put_s - a function that print a string
 * @string: store the argument
 * Return: return the number of character
 */

int put_s(char *string)
{
	int my_id, is_val = 0;

	if (string)
	{
		while (string[my_id] != '\0')
		{
			_putchar(string[my_id]);
			is_val += 1;
			my_id++;
		}
	}
	return (is_val);
}
