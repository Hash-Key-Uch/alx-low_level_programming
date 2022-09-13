#include "main.h"
/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet
 * and followed by a new line
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char decuple, alpha;

	decuple = 0;
	while (decuple < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar (alpha);
		}
		decuple++;
		_putchar('\n');
	}
}
