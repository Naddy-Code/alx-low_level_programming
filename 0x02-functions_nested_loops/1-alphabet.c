#include "main.h"

/**
 * print_alphabet - uses the _putchar function to print
 *                  the alphabet a - z
 */

void print_alphabet(void)
{
	char str;

	for (ctr = 'a'; str <= 'z'; str++)
	{
		_putchar(str);
	}
	_putchar('\n');
}
