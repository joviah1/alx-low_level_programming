#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: Pointer to the pointer of the first node in the list
 * @index: The index of the node to be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	 if (current == NULL || current->next == NULL)
		 return (-1);

	 temp = current->next;

	 current->next = temp->next;
	 free(temp);
	 return (1);
}
