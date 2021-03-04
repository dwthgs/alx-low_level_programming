#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
char *ap;

if (!nmemb || !size)
return (NULL);

ap = malloc(nmemb * size);

if (!ap)
return (NULL);

while (i < (nmemb * size))
ap[i++] = '\0';

return (ap);
}
