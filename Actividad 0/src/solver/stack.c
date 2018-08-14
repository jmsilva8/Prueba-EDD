#include "stack.h"
#include <stdlib.h>
#include <stdio.h>


Stack *stack_init()
{
  Stack *tubo;
  tubo = (Stack *) malloc(sizeof(Stack));
  tubo->num_pelotas = 0;
  tubo->ultimo = NULL;
  return tubo;
}

void push(Stack* stack, int color)
{
  Node *nuevo;
  nuevo = (Node *) malloc(sizeof(Node));
  nuevo->color = color;
  nuevo->anterior = stack->ultimo;
  stack->num_pelotas += 1;
  stack->ultimo = nuevo;
}

int pop(Stack* stack)
{
  /* Aqui agrega tu código */
}

void destroy(Stack *stack)
{
  /* Aqui agrega tu código */
}


/* A continuación puedes crear cualquier función adicional que ayude en la
  implementación de tu programa */
