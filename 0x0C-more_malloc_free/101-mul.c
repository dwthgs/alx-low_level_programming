
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _isdigit  - Checks for a digit
 * @c: parameter c
 *
 * Description: Checks for a digit.
 * Betty Style
 * Return: Return 1 is a digit 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);
else
	return (0);

return (0);
}

/**
 * main - Entry
 *
 * @argc: count
 * @argv: vector.
 *
 * Return: multiply
 */
int main(int argc, char *argv[])
{
int c, i = 0, sum = 0;
if (argc != 3)
{
	printf("Error\n");
	exit(98);
}
for (c = 1; c < argc; c++)
{
while (*(argv[c] + i) != '\0')
{
	if (!_isdigit(*(argv[c] + i)))
	{
		printf("Error\n");
		exit(98);
	}
	i++;
}
sum = atoi(argv[1]) * atoi(argv[2]);
}
printf("%d\n", sum);
return (0);
}
