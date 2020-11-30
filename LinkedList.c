#include "LinkedList.h"

// creat node.. //
Node* SLL_creatNode(ElementType _newData)
{
	Node* newNode = (Node*)malloc(sizeof(Node));

	newNode->data = _newData;
	newNode->nextNode = NULL;

	return newNode;
}

// destroy node.. //
void SLL_destroyNode(Node* _node)
{
	free(_node);
}

// append node.. //
void SLL_appendNode(Node** _head, Node* _newNode)
{
	if ((*_head) == NULL)
	{
		*_head = _newNode;
	}
	else
	{
		Node* tail = (*_head);

		while (tail->nextNode != NULL)
		{
			tail = tail->nextNode;
		}

		tail->nextNode = _newNode;
	}
}

// insert node after.. //
void SLL_insertAfter(Node* _current, Node* _newNode)
{
	_newNode->nextNode = _current->nextNode;
	_current->nextNode = _newNode;
}

// insert new head node.. //
void SLL_insertNewHead(Node** _head, Node* _newNode)
{
	if ((*_head) == NULL)
	{
		*_head = _newNode;
	}
	else
	{
		_newNode->nextNode = (*_head);
		(*_head) = _newNode;
	}
}

// remove node.. //
void SLL_removeNode(Node** _head, Node* _removeNode)
{
	if ((*_head) == _removeNode)
	{
		*_head = _removeNode->nextNode;
	}
	else
	{
		Node* currentNode = (*_head);

		while (currentNode != NULL && currentNode->nextNode != _removeNode)
		{
			currentNode = currentNode->nextNode;
		}

		if (currentNode != NULL)
			currentNode->nextNode = _removeNode->nextNode;
	}
}

// get node at.. //
Node* SLL_getNodeAt(Node* _head, int _location)
{
	Node* current = _head;

	while (current != NULL && (--_location) >= 0)
	{
		current = current->nextNode;
	}

	return current;
}

// get node count.. //
int SLL_getNodeCount(Node* _head)
{
	int count = 0;
	Node* current = _head;

	while (current != NULL)
	{
		current = current->nextNode;
		count++;
	}

	return count;
}
