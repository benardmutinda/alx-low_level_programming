#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[]);
{
(void)argv; /*ingore argv*/
printf("%d\n", argv - 1);

return (0);
}
