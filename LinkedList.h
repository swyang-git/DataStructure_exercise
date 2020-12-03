#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode
{
	ElementType data;
	struct tagNode* next_node;
} Node;

Node* SLL_creatNode(ElementType _new_data);

void SLL_destroyNode(Node* _node);
void SLL_destroyAllNode(Node** _list);

void SLL_appendNode(Node** _head, Node* _new_node);

void SLL_insertAfter(Node* _current, Node* _new_node);
void SLL_insertBefore(Node** _head, Node* _current, Node* _new_node);
void SLL_insertNewHead(Node** _head, Node* _new_node);

void SLL_removeNode(Node** _head, Node* _remove_node);

Node* SLL_getNodeAt(Node* _head, int _location);
int SLL_getNodeCount(Node* _head);


