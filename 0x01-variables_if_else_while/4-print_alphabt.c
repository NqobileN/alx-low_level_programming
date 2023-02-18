#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints output in lowercase except q and e
 * Return: Always success
 */

int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
		putchar(low);
	}
	putchar('\n');
	return (0);
}
