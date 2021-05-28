//Adriano Pinheiro Fernandes TIA: 32055161
#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__
#include <string>
using namespace std;

struct Node {
	float numero;
	Node* next;
};

struct linkedlist {
	int count;
	Node* top;
	Node* tail;
};

linkedlist* Create();

void Append(linkedlist* list, float numero);

void InsertFront(linkedlist* list, float numero);

bool IsEmpty(const linkedlist* list);

int Count(const linkedlist* list);

void Clear(linkedlist* list);

Node* RemoveNode(linkedlist* list, float numero);

Node* RemoveTail(linkedlist* list);

Node* RemoveHead(linkedlist* list);

Node* GetHead(const linkedlist* list);

Node* GetNode(const linkedlist* list, float numero);





#endif