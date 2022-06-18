#include "monty.h"

/**
 *nop - doesn't do anything
 *@stack: double pointer to stack
 *@line_number: line number
 *Return: void
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
 *swap -
 *@stack: double pointer to stack
 *@line_number: line number
 *Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int swap_n;

	if (tmp == NULL || tmp->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n", line_number);
		freer();
		exit(EXIT_FAILURE);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	swap_n = tmp->prev->n;
	tmp->prev->n = tmp->n;
	tmp->n = swap_n;
}
