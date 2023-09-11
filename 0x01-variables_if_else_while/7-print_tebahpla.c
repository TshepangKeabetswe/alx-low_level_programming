#include <stdio.h>
/**
 * main - a program that prints alphabet
 * Return: 0 successs
 */
int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
		putchar(b);
	putchar('\n');
	return (0);
}
