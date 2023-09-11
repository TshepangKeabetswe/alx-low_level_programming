#include <stdio.h>
/**
 * main - the progam that prints alphabet
 * Return: 0 success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
