#include <stdio.h>
/**
 * main - print size of various outputs in computer
 * Return: 0 indictaes success
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	pritnf("Size of an int: %zu byte(s)\n", sizeof(int));
	print("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
			return (0);
}
