#include <stdio.h>
#include "lists.h"

/**
 * count - count the number
 * pointer - points s to head pointer
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *point = h;
	
	while (point -> next != NULL)
	{
	point = point->next;		
	count++;
	}
	return (count);
}
