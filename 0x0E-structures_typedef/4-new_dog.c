#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - create new data structure for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *simba;
	int len_name, len_owner;

	simba = malloc(sizeof(dog_t));
	if (simba == NULL)
	return (NULL);

	len_name = _strlen(name);
	simba->name = malloc(sizeof(char) * len_name + 1);
	if (simba->name == NULL)
	{
	free(simba);
	return (NULL);
	}
	simba->name = _strcpy(simba->name, name);
	len_owner = _strlen(owner);
	simba->owner = malloc(sizeof(char) * len_owner + 1);
	if (simba->owner == NULL)
	{
	free(simba->name);
	free(simba);
	return (NULL);
	}

	simba->owner = _strcpy(new_dog->owner, owner);
	simba->age = age;

	return (simba);
}

/**
 * _strlen - determinates the lenght of a string
 * @s: pointer to string
 * Return: the length
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	;
	return (a);
}

/**
 * _strcpy - copies a pointed string
 * @dest: pointer to the destine string
 * @src: pointer to the source string
 * Return: the adress of the destiny string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
	dest[a] = src[a];
	a++;
	}

	dest[a] = '\0';
	return (dest);
}
