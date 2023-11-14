#include "main.h"
/**
 * prt_n - prints an int to stdout recursivley
 * @num: number to be printed
 *
 * Return: void
*/
void prt_n(int num)
{
	unsigned int temp;

	if (num < 0) /* if num is neg, print a - and make it positive */
	{
		_putchar('-');
		temp = -num;
	}
	else
		temp = num;

	if (temp / 10) /* base condtion for the recursion */
		prt_n(temp / 10);
	_putchar((temp % 10) + '0'); /* converto string and print each */
}

