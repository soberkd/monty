#include "monty.h"

/**
  * error_exit - free stack and exit
  * @stack: pointer to the top of stack
  *
  */

void error_exit(stack_t **stack)
{
	if (*stack)
		free_dlistint(*stack);
	exit(EXIT_FAILURE);
}
