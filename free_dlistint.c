#include "monty.h"

/**
  * free_dlistint - fuction that frees a doubly linked list
  * @head: pointer to the top node.
  *
  */

void free_dlistint(stack_t *head)
{
	stack_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
