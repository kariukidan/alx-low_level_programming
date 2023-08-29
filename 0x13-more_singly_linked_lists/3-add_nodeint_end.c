#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: head of list
 * @n: data to add
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
