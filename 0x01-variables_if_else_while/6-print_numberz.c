#include <stdio.h>

/**
 * main - print 0 to 9
 *
 * Return: Always(successful)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
