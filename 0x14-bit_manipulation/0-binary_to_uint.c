#include "main.h"
#include <string.h>
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int s , slen;
	int total =0;
	int decval=1;

	slen = strlen(b);

	if (b == NULL)
	return (not_binary);	

	for (i = (slen -1); i >= 0; i--)
	{
	if (b[i] == '1')total += decval;
	decval*= 2;
	}	

	return total;
}
