#include "monty.h"
/**
 *pint - prints the value at the top of the stack
 *@stack: double pointer to stack
 *@line_number: line number
 *
 *Return: void
 */
void pint(stack_t **stack unsigned int line_number)
{
	stack_t *tmp = *stack;
	
	if(tmp == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	printf("%d\n", tmp->n);
}

/**
 *nop - doesn't do anything
 *@stack: double pointer to stack
 *@line_number: line number
 *Return: void
 */
void nop(stack_t **stack unsigned int line_number)
{
	(void)stack;
	(void)ln;
}

/**
 *swap -
 *@stack: double pointer to stack
 *@line_number: line number
 *Return: void
 */
void swap(stack_t **stack unsigned int line_number)
{

}
