#include "main.h"

/**
 * print_numbers - prints number from 0 to 9
 * Return: no return
 */

void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 57; ch++)
	{
		_putchar(ch + '0');
	}
	_putchar('\n');
}
