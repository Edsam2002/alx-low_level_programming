#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 */
char *_copy(char *src);
/**
 *  * new_dog - Create dog obj
 *   * @name: param
 *    * @age: param
 *     * @owner: param
 *      * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *simba;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	simba = malloc(sizeof(dog_t));
	if (simba == NULL)
	{
		return (NULL);
	}
	
	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(simba);
		return (NULL);
	}
	(*simba).name = new_name;
	(*simba).age = age;
	
	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*simba).name);
		free(bingo);
		return (NULL);
	}
	(*simba).owner = new_owner;
	return (simba);
}
