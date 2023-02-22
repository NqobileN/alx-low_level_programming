#include "main.h"

/**
 * print_to_98 - print n to 98 counts, in ascending order, that are separated by comma
 * @n: input
 */

void print_to_98(int n)
{
	int counter;

	if (n > 98)
		for (counter = n; counter > 98; --counter)
			printf("%d, ", counter);
	else
		for (counter = n; counter < 98; ++counter)
			printf("%d, ", counter);
	printf("98\n");
}
