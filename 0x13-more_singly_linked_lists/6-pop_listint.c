#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list, 
 * and returns the head node’s data (n)
 * @head: A pointer to the pointer to the head of the list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)

{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(head);
	*head = temp;

	return (data);
}

