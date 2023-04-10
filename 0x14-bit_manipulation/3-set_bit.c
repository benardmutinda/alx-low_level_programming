#include "main.h"




/**
 * set_bit - writes a function that sets the value of a bit to 1
 * @n: pointer to number to change
 * @index: index of a bit to be set to 1
 *
 * Return: 1 if success, -1 if error occurs
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);

}
