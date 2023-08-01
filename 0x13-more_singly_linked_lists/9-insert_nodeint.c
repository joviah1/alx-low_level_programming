#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: Pointer to a pointer to the head of the linked list
 * @idx: the index of the list where the new node should be added
 * @n: data to insert in new node
 *
 * Return: pointer to the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *current_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
			return (new_node);
	}
	current_node = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current_node = current_node->next;
	}
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
