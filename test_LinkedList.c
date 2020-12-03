
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


int main()
{
	int i = 0;
	int count = 0;

	Node* list = NULL;
	Node* current = NULL;
	Node* new_node = NULL;

	// add 5 nodes.. //
	for (int i = 0; i < 5; ++i)
	{
		new_node = SLL_creatNode(i);
		SLL_appendNode(&list, new_node);
	}

	// insert new head.. //
	new_node = SLL_creatNode(-1);
	SLL_insertNewHead(&list, new_node);

	// insert 3 after head.. //
	new_node = SLL_creatNode(-100);
	current = SLL_getNodeAt(list, 3);
	SLL_insertAfter(current, new_node);


	// print list status ..//
	count = SLL_getNodeCount(list);
	for (int i = 0; i < count; ++i)
	{
		current = SLL_getNodeAt(list, i);
		printf("List[%d] : %d\n", i, current->data);
	}


	// delete and free all nodes.. //
	printf("// delete and free all nodes.. //\n");

	//count = SLL_getNodeCount(list);
	//for (int i = 0; i < count; ++i)
	//{
	//	current = SLL_getNodeAt(list, i);

	//	if (current != NULL)
	//	{
	//		SLL_removeNode(&list, current);
	//		SLL_destroyNode(current);
	//	}
	//}
	SLL_destroyAllNode(list);
	printf("// delete and free all nodes..? //\n");

	int current_count = SLL_getNodeCount(list);
	printf("List count : %d\n", current_count);

	return 0;
}