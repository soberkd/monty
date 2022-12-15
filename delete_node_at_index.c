#include "monty.h"

/**
  * delete_dnodeint_at_index - deletes a node at an index.
  * @head: pointer to the top node.
  * @index: the index of the node to delete.
  *
  * Return: 1 if true, -1 otherwise.
  */

int delete_dnodeint_at_index(stack_t **head, unsigned int index)
{
	stack_t *tmp1;
	stack_t *tmp2;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	tmp1 = *head;

	if (index == 0)
	{
		*head = tmp1->next;
		if (tmp1->next != NULL)
			tmp1->next->prev = NULL;
		free(tmp1);
		return (1);
	}
	i = 0;
	while (i < (index - 1))
	{
		if (tmp1 == NULL)
			return (-1);
		tmp1 = tmp1->next;
		i++;
	}
	tmp2 = (tmp1->next)->next;
	if (tmp1->next->next != NULL)
		tmp1->next->next->prev = tmp1;
	free(tmp1->next);
	tmp1->next = tmp2;

	return (1);
}
