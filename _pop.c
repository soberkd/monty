#define DEFINE_VARIABLES
#include "monty.h"
#include "extern.h"
/**
  * _pop - removes the top element of the stack.
  * @stack: monty stack.
  * @line_number: opcode index.
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		error_exit(stack);
	}
	delete_dnodeint_at_index(stack, 0);
}
