#include "main.h"

/**
 * _islower - Shows 1 if the input is a
 * lowercase character, and returns
 * 0 if otherwise
 * 97 to 122 = 'a' - 'z'
 * hint: The ASCII code was used.
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)

	{
		return (1);

	}

	else

	{
		return (0);

	}

	_putchar('\n');
}
