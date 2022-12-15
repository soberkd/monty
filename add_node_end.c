#include "monty.h"

/**
  * add_dnodeint_end - adds a node at the end of the linked list.
  * @head: pointer to the top node.
  * @n: data to be inserted in the list.
  *
  * Return: pointer to the top.
  */

stack_t *add_dnodeint_end(stack_t **head, const int n)
{
	stack_t *tmp = *head;
	stack_t *tmp3;

	tmp3 = (stack_t *)malloc(sizeof(stack_t));

	if (tmp3 == NULL)
		return (NULL);

	tmp3->n = n;

	if (*head == NULL)
	{
		tmp3->next = NULL;
		tmp3->prev = NULL;
		*head = tmp3;
		return (tmp3);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = tmp3;
	tmp3->prev = tmp;
	tmp3->next = NULL;
	return (tmp3);
}
