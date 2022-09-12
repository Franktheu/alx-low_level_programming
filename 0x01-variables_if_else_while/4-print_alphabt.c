#include <stdio.h>

/**
 * main - print alphabet except q n e
 *
 * Return: Always(successful)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');
	return (0);
}
