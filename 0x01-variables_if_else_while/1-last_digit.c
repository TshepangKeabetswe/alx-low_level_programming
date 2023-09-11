#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - This program displays the last digit of an integer n
 * Return: 0 if Successful
 */
int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	c = n % 10;
	if (c > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, c);
	else if (c == 0)
		printf("Last digit of %d is %d and is 0\n", n, c);
	else if (c < 6 && c != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, c);
	return (0);
}
