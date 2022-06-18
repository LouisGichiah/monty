#include "monty.h"
/**
 *sub - subtracts the topmost element from the second topmost
 *element
 *@stack:pointer to stack
 *@line_number: line number
 *Return:void
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int sub_n;

	if (tmp == NULL || tmp->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't sub, stack too short\n", line_number);
		freer();
		exit(EXIT_FAILURE);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	sub_n = tmp->prev->n - tmp->n;
	tmp->prev->n = sub_n;
	tmp->prev->next = NULL;
	free(tmp);
}
