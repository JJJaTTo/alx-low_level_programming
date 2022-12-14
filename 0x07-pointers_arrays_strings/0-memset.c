#include "main.h"
/**
 * _memset - add char into memery at constant byte
 * @s: memory space to be filled with
 * @b: byte to be filled with
 * @n: number of spaces to fill
 *
 * Return: return pointer to memory address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n, i++)
	{
		*(s + i) = b;
	}
	return (s);
}
