#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 * @head: Pointer to the head of the linked list
 *
 * Return: The sum of all the data (n) in the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while(temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
