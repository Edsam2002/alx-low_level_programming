#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of linked list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *curr;
	int s;

	if (head == NULL)
	return (0);

	curr = *head;
	if (current == NULL)
	return (0);

	s = curr->n;
	*head = curr->next;
	free(curr);
	return (s);
}
