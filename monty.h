#ifndef MONTY_H
#define MONTY_H
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* header files */
#define  _GNU_SOURCE
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/* function prototypes */
void free_stackt(stack_t *head);
void push(stack_t **stack, char *value, char *opcode, int line_number, FILE *);
size_t pall(stack_t *h);
void checkerror(int);
void free_stackt(stack_t *head);
void read_monty_lines(FILE *str, stack_t **);
void modulo(stack_t **stack, char *opcode, int line, FILE *stream);
void pint(stack_t *stack, char *opcode, int line, FILE *stream);
char *execute_opcode(stack_t **stack, char **opcode, int line, FILE *);
FILE *openMonty(char *);
void multiply(stack_t **stack, char *opcode, int line, FILE *stream);
void swap(stack_t **stack, char *opcode, int line, FILE *stream);
void sub(stack_t **stack, char *opcode, int line, FILE *stream);
int pop(stack_t **stack, char *opcode, int line, FILE *stream);
void divide(stack_t **stack, char *opcode, int line, FILE *stream);
void testvalue(stack_t **stack, char *val, char *op, int line, FILE *str);
void free_stack_opcode(stack_t **stack, char *opcode, int line, FILE *);
void arrayinit(char **s, int size);
void unknown_inst_exit(stack_t **stack, char *opcode, int line, FILE *);
char *strseperate(char **arr, char **str);
void add(stack_t **stack, char *opcode, int line, FILE *stream);
#endif /* MONTY_H */
