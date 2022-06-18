#include "monty.h"
/**
 *pint - prints the top value of a stack
 *@stack:pointer to stack
 *@ln:line number
 *Return:void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (!tmp)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		freer();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", tmp->n);
}
