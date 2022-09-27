#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest:- destination address
 * @src: source address
 * @n: number of bytes to copy
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (i < n)
	{
		*(dest + 1) = *(src + 1);
		i++;
	}
	return (dest);
}{
