#include "lists.h"
/**
 *  get_nodeint_at_index -  returns the nth node of a listint_t
 *  @head: first node in the linked list
 *  @index: index of the node to return
 *  Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0, nodes;
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (index > nodes)
		return (NULL);
	temp = head;
	while (counter <= index)
	{
		if (counter == index)
			return (temp);
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
