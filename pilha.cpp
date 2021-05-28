//Adriano Pinheiro Fernandes TIA: 32055161
#include "pilha.h"

stack create()
{
	stack pilha;
	pilha.list = Create();
	return pilha;
}

bool IsEmpty(stack& stack)
{
	return IsEmpty(stack.list);
}

void Push(stack& stack, float numero)
{
	Append(stack.list, numero);
}

float Pop(stack& stack)
{
	Node* a = RemoveTail(stack.list);
	if (a == nullptr) {
		return NULL;
	}
	float numero = a->numero;
	delete a;
	return numero;
}


float Top(stack& stack)
{
	Node* a = GetHead(stack.list);
	if (a == nullptr) {
		return NULL;
	}
	return a->numero;
}

int Count(stack& stack)
{
	return Count(stack.list);
}

bool Clear(stack& stack)
{
	Clear(stack.list);
	return IsEmpty(stack.list);
}








