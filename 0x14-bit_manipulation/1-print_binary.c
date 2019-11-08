#include "holberton.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Binary number
 *
 * Return: Print to stdout the binary representation of n
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');

}
