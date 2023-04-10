#include "main.h"


/**
 * clear_bit - writes a function that sets the value of a bit to 0
 *
 * @n: Pointer number to change
 * @index: index of bit to clear
 *
 * Return: 1 if success, -1 if error
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);

}
