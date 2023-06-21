#include "main.h"

/**
 * print_sign - A function that prints the sign of a number
 *
 * @n: takes integer type input for function
 *
 * Retun: 1 if +, 0 if 0 -1 if - and / if not a digit
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(41);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(45);
		return ('/');
	}
}
