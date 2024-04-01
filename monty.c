#include "monty.h"

/* Global variable */
stack_t *stack = NULL;

/**
 * main - entry point for Monty Bytecode Interpreter
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
    FILE *file;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    unsigned int linenum = 1;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((read = getline(&line, &len, file)) != -1)
    {
        /* Tokenize the line and execute the instruction */
        /* Implement this part based on your bytecode instructions */
        linenum++;
    }

    free(line);
    fclose(file);
    return (0);
}

