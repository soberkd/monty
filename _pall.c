#include "monty.h"

/**
  * _pall - prints all the values on the stack, starting
  *          from the top of the stack.
  * @stack: the monty stack.
  * @line_number: opcode index.
  */

void _pall(stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *process;

	process = *stack;
	while (process != NULL)
	{
		printf("%d\n", process->n);
		process = process->next;
	}
}
