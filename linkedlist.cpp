//Adriano Pinheiro Fernandes TIA: 32055161
#include "linkedlist.h"

linkedlist* Create()
{
	linkedlist* list = new linkedlist;
	list->count = 0;
	list->top = nullptr;
	list->tail = nullptr;

	return list;
}


void Append(linkedlist* list, float numero)
{
	Node* n = new Node;
	n->numero = numero;
	n->next = nullptr;

	if (IsEmpty(list)) {
		list->top = list->tail = n;
	}

	else {
		list->tail->next = n;
		list->tail = n;
	}

	++list->count;
}

void InsertFront(linkedlist* list, float numero)
{
	Node* n = new Node;
	n->numero = numero;
	n->next = list->top;

	if (IsEmpty(list)) {
		list->top = list->tail = n;
	}

	else {
		list->top = n;
	}

	++list->count;
}

bool IsEmpty(const linkedlist* list)
{
	if ((list->count == 0)) {
		return true;
	}

	return false;
}


int Count(const linkedlist* list)
{
	return list->count;
}

void Clear(linkedlist* list)
{
	while (list->count != 0) {
		RemoveHead(list);
	}
}

Node* RemoveNode(linkedlist* list, float numero)
{
	Node* Remove = list->top;
	Node* Remove2 = nullptr;

	while (Remove != nullptr) {
		Remove2 = Remove;
		Remove = Remove->next;
	}
	if (Remove == nullptr) {
		return nullptr;
	}
	else if (Remove == list->top) {
		return RemoveHead(list);
	}
	else if (Remove == list->tail) {
		return RemoveTail(list);
	}
	else {
		Remove2->next = Remove->next;
		Remove->next = nullptr;
		--list->count;
		return Remove;
	}
}

Node* RemoveTail(linkedlist* list)
{
	Node* ToRemove = list->top;
	Node* previous = nullptr;

	if (list->top == list->tail) {
		return RemoveHead(list);
	}

	while (ToRemove != list->tail) {
		previous = ToRemove;
		ToRemove = ToRemove->next;
	}

	previous->next = nullptr;

	list->tail = previous;
	--list->count;

	return ToRemove;
}

Node* RemoveHead(linkedlist* list)
{
	if (IsEmpty(list)) {
		return nullptr;
	}
	Node* toRemove = list->top;

	if (list->top == list->tail) {
		list->top = list->tail = nullptr;
	}

	else {
		list->top = list->top->next;
	}
	--list->count;
	return toRemove;
}

Node* GetHead(const linkedlist* list)
{
	return list->top;
}

Node* GetTail(const linkedlist* list)
{
	return list->tail;
}

Node* GetNode(const linkedlist* list, float numero)
{
	Node* n = list->top;
	while (n != nullptr) {
		if (n->numero == numero) {
			return n;
		}
		n = n->next;
	}
	return nullptr;
}






