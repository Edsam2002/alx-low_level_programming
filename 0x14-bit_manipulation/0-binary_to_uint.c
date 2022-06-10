#include "main.h"
#include <string.h>
/**
 * binary_to_unit - convert binary to unsigned int
 * Return: unsigned int
 */
unsigned int binary_to_unit(const char *b)
{
	int i;
	int slen;
	int total = 0;
	int decval = 1;

	slen = strlen(b);
	if (b == NULL)
	return (0);

	for (i = (slen -1); i >= 0; i--)
	{
	if (b[i] == '1')total += decval
	{
	decval *= 2;
	}
	}

	return (total);

}

