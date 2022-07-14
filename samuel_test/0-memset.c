#include "main.h"

/**
 *  * _memset - sets memeory
 *   * @s: pointer params
 *    * @b: params
 *     * @n: parms
 *      * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int e;

	for (e = 0; e < n; e++)
	{
	s[e] = b;
	}
	return (s);
}
