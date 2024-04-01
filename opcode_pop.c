#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: double pointer to the head of the stack
 */
void pop(stack_t **stack)
{
    stack_t *temp;

    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", linenum);
        exit(EXIT_FAILURE);
    }

    temp = *stack;
    *stack = (*stack)->next;
    free(temp);
}

