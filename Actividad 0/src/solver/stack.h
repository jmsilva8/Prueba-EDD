#pragma once


typedef struct stack Stack;

typedef struct node Node;


struct node
{
  char color;
  Node *anterior;
};

struct stack
{
  char num_pelotas;
  Node *ultimo;
};


Stack *stack_init();

void push(Stack* stack, int color);

int pop(Stack* stack);

void destroy(Stack *stack);
