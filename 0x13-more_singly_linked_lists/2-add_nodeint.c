#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the pointer of the first element
 * @n: The integer of the new node
 *
 * Return: the address of the new element or Null if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node ->n = n;
	new_node ->next = *head;

		*head = new_node;

	return (new_node);
}