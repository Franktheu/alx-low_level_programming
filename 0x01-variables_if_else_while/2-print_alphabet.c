#include <stdio.h>

/**
 * main - output lowercase and uppercase
 *
 * Return: Always(successful)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
