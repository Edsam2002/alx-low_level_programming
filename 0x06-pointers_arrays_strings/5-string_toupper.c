#include "main.h"
/**
 *  * string_toupper - changes all lowercase letters of a string to uppercase
 *   * @str: string
 *    * Return: returns char
 */


char *string_toupper(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
	if (str[s] >= 'a' && str[s] <= 'z')
	{
	str[s] = str[s] - 32;
	}
	}

	return (str);
}
