#include <stdio.h>
/**
 * main - a progarm that print numbers
 * Return: 0 success
 */
int main(void)
{
	int b;

	b = 0;
	for (b = 0; b < 10; b++)
		putchar(b + '0');
	putchar('\n');
	return (0);
}
