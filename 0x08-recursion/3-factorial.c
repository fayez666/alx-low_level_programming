#include "main.h"
/**
 * factorial - returns the factorial of a number
 *@n : the number that calculate factorial for it
 * Return: factoral if n >0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
