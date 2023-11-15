#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the variable n
 * Return: always 0 (Success)
*/
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	printf("Last digit of %i and is %i greater than 5\n", n, last);
	else if ((n % 10) == 0)
	printf("Last digit of %i and is %i 0\n", n, last);
	else
	printf("Last digit of %i and is %i less than 6 and not 0\n", n, last);
	return (0);
}