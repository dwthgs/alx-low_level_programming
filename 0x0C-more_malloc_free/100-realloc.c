#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: void pointer to new memory location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *temp, *p;
unsigned int i = 0;

if (new_size == old_size)
return (ptr);

if (!ptr)
{
ptr = malloc(new_size);
if (!ptr)
return (NULL);
return (ptr);
}

if (!new_size && ptr)
{
free(ptr);
return (NULL);
}

temp = malloc(new_size);
p = ptr;

if (old_size > new_size)
old_size = new_size;

for (i = 0; i < old_size; i++)
temp[i] = p[i];

free(ptr);

return (temp);
}
