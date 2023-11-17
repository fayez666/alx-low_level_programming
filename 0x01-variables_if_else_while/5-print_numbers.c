#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * Return: 0
*/
int main(void)
{
	int count = 0;

	while (count < 10)
	{
		putchar(count);
		count++;
	}
	return (0);
}
