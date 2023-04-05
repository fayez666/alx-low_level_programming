#include "main.h"
/**
 * factorial - this func calculate factorial
 *@n : the number that calculate factorial for it
 * Return : factoral if n >0 
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (0);

	return (n*factorial(n-1));
}
