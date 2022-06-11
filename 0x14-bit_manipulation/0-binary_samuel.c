#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int i;
	int slen;
	int decval = 0;

	slen = strlen(b);

	if (b == NULL)
	return (0);

	for (i = (slen - 1); i >= 0; i--)
	{
	if (b[i] == '1')
	{
	total += decval;
	decval *= 2;
	}
	}

	return (total);
}
