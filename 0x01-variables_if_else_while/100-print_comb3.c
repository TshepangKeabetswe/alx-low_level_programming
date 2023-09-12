#include <stdio.h>
/**
 * main - a program that prints alphabet
 * Return: 0 success
 */
int main(void)
{
	int b;
	int c;

	b = 0;
	c = 0;
	for (b = 0; b <= 8; b++)
	{
		for (c = b + 1; c <= 9; b++)
	{
			putchar(b + '0');
			putchar(c + '0');
			if (b != 8 || c != 9)
			{
				putchar(',');
				putchar(' ');
			}
		if (c == 9)
			break;
	}
	}
		putchar('\n');
		return (0);
}
