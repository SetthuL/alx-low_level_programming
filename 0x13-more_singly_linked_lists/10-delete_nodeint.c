#include "lists.h"

/**
* delete_nodeint_at_index - A function that deletes a node in a linked list
* at a certain index
* @head: Pointer to the first element in the list
* @index: Index of the node to delete
* Return: 1 if Succeeded, or -1 if Failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *existing = NULL;

	unsigned int node = 0;

	if (*head == NULL)
	return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	return (1);
	}
	while (node < index - 1)
	{
		if (!temp || !(temp->next))
		return (-1);
		temp = temp->next;
		node++;
	}
	existing = temp->next;
	temp->next = existing->next;
	free(existing);
	return (1);
}
