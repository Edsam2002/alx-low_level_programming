#include "main.h"
/**
 *  * _memcpy - copy memory
 *   * @dest: pointer params
 *    * @src: pointer params
 *     * @n: unsigned int param
 *      * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int e;

	for (e = 0; e < n; e++)
	{
	dest[e] = src[e];
	}
	return (dest);
}
