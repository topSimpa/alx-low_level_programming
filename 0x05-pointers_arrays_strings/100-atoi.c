#include "main.h"
#include <stdio.h>

/**
* digit_count - return the first interger in a string
* @s: the string to check interger in
* Return: int the integer to return (sucess)
*/

int digit_count(char *s)
{
	int digit_no =  0;

	while (*s != '\0')
	{
		if (*s >= 48 && *s <= 57)
		{
			/*printf("%c", *s);*/
			digit_no++;
			if ( !(*(s + 1) >= 48 && *(s + 1) <= 57))
			{
				break;
			}
		}
		s++;
	}
	/*printf("dice")*/;
	return (digit_no);
}


/**
 * pow_10 - returns the result of power 10
 * @n: indices
 *
 * Return: the result
 */

int pow_10(int n)
{
	if (n == 0)
		return (1);
	return (10 * pow_10(--n));
}


/**
 * sign - tells the sign of the number
 * @s: string to convert to number
 * Return: int (1 or -1) sucess
 */

int sign(char *s)
{
	int count = 0;

	while (*s != '\0' && !(*s >= 48 && *s <= 57))
	{
		if(*s == '-')
		{
			count++;
		}
		s++;
	}
	/*printf("call");*/

	if (count % 2 == 0)
		return (1);
	return (-1);
}


/**
 * _atoi - convert a string to a number
 * @s: the string to convert
 *
 * Return: the number or 0
 */


int _atoi(char *s)
{
	int digit_c, si, num = 0;

	digit_c = digit_count(s);
	if (digit_c != 0)
	{
		si = sign(s);
		while (*s != '\0')
		{
			if (*s >= 48 && *s <= 57)
			{
				num += ((*s) - '0') * (pow_10(--digit_c));
				if (!(*(s + 1) >= 48 && *(s + 1) <= 57))
					break;
			}
			s++;
		}
		num = num * si;
	}
	/*printf("ace");*/
	return (num);
}
