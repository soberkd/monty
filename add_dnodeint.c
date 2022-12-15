#include "monty.h"

/**
 * add_dnodeint - adds node at the beginning of the linked
 *                                  list.
 * @head: pointer to the top node.
 * @n: data to be inserted.
 *
 * Return: pointer to the top.
 */

stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *tmp;

	tmp = (stack_t *)malloc(sizeof(stack_t));

	if (tmp == NULL)
		return (NULL);

	if (*head == NULL)
	{
		tmp->n = n;
		tmp->next = NULL;
		tmp->prev = NULL;
		*head = tmp;
		return (*head);
	}

	(*head)->prev = tmp;
	tmp->n = n;
	tmp->next = *head;
	tmp->prev = NULL;
	*head = tmp;
	return (*head);
}
