#include <stdio.h>
#include <lists.h>
/**
 * count - count the number
 * pointer - points s to head pointer
 */
size_t listint_len(const listint_t *h)
{
	int count;
	listint_t *point
	point = h
	while (point -> != NULL)
	{
	count++;
	point = point->next
	}
	return count;
}
