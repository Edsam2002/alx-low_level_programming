#include "main.h"
/**
 *  *_strcat - concatenates two strings
 *   *@dest: A pointer to a character that will be changed
 *    *@src: A pointer to a character that will also be changed
 *     *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int s, r;

	s = 0;
	while (dest[s] != '\0')
	{
	s++;
	}

	r = 0;
	while (src[r] != '\0')
	{
	dest[s] = src[r];
	r++;
	s++;
	}
	dest[s] = '\0';

	return (dest);
}
