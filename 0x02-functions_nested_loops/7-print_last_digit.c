#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * of a number.
 * @n: uses int print_last_digit(int n)
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int l;

	l = n % 0;

	if (l < 0)

	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
