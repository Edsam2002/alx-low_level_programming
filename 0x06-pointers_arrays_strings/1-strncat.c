#include "main.h"
/**
 *  *_strncat - concatenates two strings
 *   *@dest: A pointer to a character that will be changed
 *    *@src: A pointer to a character that will be changed
 *     *@n: value
 *      *Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int s, r;

	s = 0;
	while (dest[s] != '\0')
	{
	s++;
	}

	r = 0;
	while (r < n && src[r] != '\0')
	{
	dest[s] = src[r];
	r++;
	s++;
	}

	dest[s] = '\0';

	return (dest);
}
