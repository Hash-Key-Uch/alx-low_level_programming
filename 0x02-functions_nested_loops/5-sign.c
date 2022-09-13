#include "main.h"
/**
 * print_sign - Determines if the input number
 * greater, equal or less than zero.
 * hint : ASCII for +, 0, - = 43, 48, 45
 * @n: uses int print_sign(int n)
 * Return: 1 is greater than zero. 0 is zero.
 * -1 is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}