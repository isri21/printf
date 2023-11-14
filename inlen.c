#include "main.h"
/**
 * inlen - gets the length of an int
 * @num: int to get length of
 *
 * Return: length
*/
int inlen(int num)
{
	int len, i;

	len = 0; /* counter for lenght */
	i = 0; /* counter for loop */

	if (num < 0) /*if num is negative and one to length and make num poisitve*/
	{
		len++;
		num = -num;
	}
	for (i = 0; num != 0; i++) /* add 1 to the len untill num is 0 */
	{
		num /= 10;
		len++;
	}
	return (len); /* return the length */
}

