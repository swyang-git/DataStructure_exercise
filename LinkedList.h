#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode
{
	ElementType data;
	struct tagNode* nextNode;
} Node;

Node* SLL_creatNode(ElementType _newData);
void SLL_destroyNode(Node* _node);
void SLL_appendNode(Node** _head, Node* _newNode);
void SLL_insertAfter(Node* _current, Node* _newNode);
void SLL_insertNewHead(Node** _head, Node* _newNode);
void SLL_removeNode(Node** _head, Node* _removeNode);
Node* SLL_getNodeAt(Node* _head, int _location);
int SLL_getNodeCount(Node* _head);


