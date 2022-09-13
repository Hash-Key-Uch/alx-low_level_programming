#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * of a number.
 * @n: uses int print_last_digit(int n)
 * Return: last digit.
 */

int print_last_digit(int n)

{

	int pld;



	pld = (n % 10);



	if (pld < 0)

	{

		pld = (-1 * pld);

	}



	_putchar(pld + '0');

	return (pld);

}
