#include "main.h"
/**
* main - writes the character c to stdout
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int main(void)
{
	int c[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
