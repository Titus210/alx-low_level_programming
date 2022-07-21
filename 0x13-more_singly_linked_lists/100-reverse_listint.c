#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *coming, *going;

	coming = NULL;
	while (*head != NULL)
	{
		going = (*head)->next;
		(*head)->next = coming;
		coming = *head;
		*head = going;
	}
	*head = coming;
	return (*head);
}
