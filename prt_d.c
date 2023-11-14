#include "main.h"
/**
 * prt_d - prints an int to the stdout with the help of a helper
 * @l: list of arguments from a variadic function.
 *
 * Return: number of characters of the integer printed
*/
int prt_d(va_list l)
{
	int num, len;

	num = va_arg(l, int); /* gets the num from argument list */
	len = inlen(num); /* gets the number of characters the number has */

	if (num == 0) /* if number is 0 print it and return 1 */
	{
		_putchar('0');
		return (1);
	}
	prt_n(num); /* call the function printn and pass it the number */
	return (len);
}

