#include "LinkedList.h"

// creat node.. //
Node* SLL_creatNode(ElementType _newData)
{
	Node* new_node = (Node*)malloc(sizeof(Node));

	new_node->data = _newData;
	new_node->next_node = NULL;

	return new_node;
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

		while (tail->next_node != NULL)
		{
			tail = tail->next_node;
		}

		tail->next_node = _newNode;
	}
}

// insert node after.. //
void SLL_insertAfter(Node* _current, Node* _newNode)
{
	_newNode->next_node = _current->next_node;
	_current->next_node = _newNode;
}

// insert before node.. //
void SLL_insertBefore(Node** _head, Node* _current, Node* _new_node)
{
	if ((*_head) == _current)
	{
		_new_node->next_node = (*_head);
		(*_head) = _new_node;
	}
	else
	{
		_new_node->next_node = _current;
	}
	
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
		_newNode->next_node = (*_head);
		(*_head) = _newNode;
	}
}

// remove node.. //
void SLL_removeNode(Node** _head, Node* _removeNode)
{
	if ((*_head) == _removeNode)
	{
		*_head = _removeNode->next_node;
	}
	else
	{
		Node* currentNode = (*_head);

		while (currentNode != NULL && currentNode->next_node != _removeNode)
		{
			currentNode = currentNode->next_node;
		}

		if (currentNode != NULL)
			currentNode->next_node = _removeNode->next_node;
	}
}

// get node at.. //
Node* SLL_getNodeAt(Node* _head, int _location)
{
	Node* current = _head;

	while (current != NULL && (--_location) >= 0)
	{
		current = current->next_node;
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
		current = current->next_node;
		count++;
	}

	return count;
}


void SLL_destroyAllNode(Node** _list)
{
	Node* current = NULL;

	int count = SLL_getNodeCount(_list);

	for (int i = 0; i < count; ++i)
	{
		current = SLL_getNodeAt(_list, i);

		if (current != NULL)
		{
			SLL_removeNode(_list, current);
			SLL_destroyNode(current);
		}
	}
}


