#include "main.h" 
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar();
{
	char a[] = {'_','p','u','t','c','h','a','r'};
	{
	       char i = 0;
       while(i < 8){
	_putchar(a[i]);
	i++;}
       }
	return 0;
}
