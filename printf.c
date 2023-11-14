#include "main.h"
/**
 * _printf - Simple version of the printf function
 * @format: string to print
 *
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list list; /* start the arg list */
	int i, count, l;

	search assoc[] = { /* initialize and define the structure used */
		{"c", prt_c}, /* mapp each specifier with it's corresponding function */
		{"s", prt_s},
		{"r", prt_r},
		{"%", prt_pp},
		{"d", prt_d},
		{"i", prt_d},
		{"R", prt_rot13}
	};
	count = 0; /* initialize counter for tracking number of chars printed */
	i = 0; /* counter for the outher while loop */
	va_start(list, format); /* start the arg list */
	/* If the format string is null or only % is entered return -1 */
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Start: /* label used for exiting the loop later */
	while (format[i] != '\0')
	{
		for (l = 0; l < 7; l++)
		{
	/* check if the charcharacter is % followed by one of the defined specifers */
			if (format[i] == '%' && format[i + 1] == assoc[l].sign[0])
			{
				count += assoc[l].assoc_fun(list); /* call the respective function*/
				i += 2; /* move the char to be printed to the next real chracter */
				goto Start; /* go out of this loop to Start */
			}
		}
		_putchar(format[i]); /* print the characters */
		count++; /* increment by 1 since it is a single char printed */
		i++; /* increment i for the outer while loop */
	}
	va_end(list); /* end arg list */
	return (count);
}

