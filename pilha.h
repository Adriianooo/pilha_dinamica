//Adriano Pinheiro Fernandes TIA: 32055161
#ifndef __STACK__
#define __STACK__
#include "linkedlist.h"

struct stack {
	linkedlist* list;
};

stack create();

bool IsEmpty(stack& stack);

float Pop(stack& stack);

float Top(stack& stack);

void Push(stack& stack, float numero);

int Count(stack& stack);

bool Clear(stack& stack);
















#endif 
