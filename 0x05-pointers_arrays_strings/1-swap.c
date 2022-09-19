#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the value of two integerd
 * using two input parameters
 *
 * @a: input parameter 1
 *
 * @b: input parameter 2
 *
 * return: nothing.
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;
}
