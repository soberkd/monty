#include "monty.h"

/**
  * free_dlistint - free the memory.
  * @head: pointer to the top node.
  *
  */

void free_dlistint(stack_t *head)
{
	stack_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
