#include <stdio.h>
/**
 * main - a program that print numbers
 * Return: 0 success
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
		putchar(b + '0');
	for (b = 10; b < 16; b++)
	putchar(b + 'a' - 10);
	return (0);
}
