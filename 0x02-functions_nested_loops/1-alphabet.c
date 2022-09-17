#include "main.h"
/**
 *  main - prints a - z
 *  prints a-z then a new line
 *
 *
 * Returns: 0 success
 * determination today = success 2m0r0
 */

void print_alphabets(void)
{
	int i = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}
