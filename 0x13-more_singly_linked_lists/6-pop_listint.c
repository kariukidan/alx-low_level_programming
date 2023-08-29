#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of the he linked list
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numb);
}
