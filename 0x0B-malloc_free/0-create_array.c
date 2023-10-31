#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: the size of array
 * @c:char to fill the array with
 * Return: Returns a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	cr = malloc(sizeof(c) * size);
	if (cr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		cr[i] = c;
	return (cr);
}
