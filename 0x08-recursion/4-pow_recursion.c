#include "main.h"

/**
 * _pow_recursion - returns x pow of 2
 * @x:base.
 * @y:exponent.
 * Return : exponent x of y
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
