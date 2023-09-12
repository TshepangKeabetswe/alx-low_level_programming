#include <stdio.h>
/**
 * main - a program that prints alphabet
 * Return: 0 success
 */
int main(void)
{
	int b;
	int c;

	for (b = 0; b < 10; b++)
	{
		for (c = b + 1; c < 10; b++)
		{
			putchar(b + '0');
			putchar(c + '0');
			if (b != 8 || c != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
