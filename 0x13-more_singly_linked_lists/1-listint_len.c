#include <stdio.h>
#include "lists.h"
/**
 * count - count the number
 * pointer - points s to head pointer
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *point = h;
	
	while (point -> != NULL)
	{
	point = point->next;		
	count++;
	}
	return count;
}
