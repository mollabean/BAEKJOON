#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct _linkednode
{
	int index; 
	int value;
	struct _linkednode* llink;
	struct _linkednode* rlink;

}linkednode;

typedef struct _head
{
	int size; 
	linkednode* link;
}head;


void InsertNode(head* header, int values);
void DeleteNode(head* header);

int main()
{
	head* header = (head*)malloc(sizeof(head)); 
	header->link = NULL;
	header->size = 0;

	int size;
	scanf("%d", &size);

	int* values = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++)
	{
		scanf("%d", values + i);
		InsertNode(header, values[i]);
	}

	for (int i = 0; i < size; i++)
	{
		DeleteNode(header);
	}
	
	free(header->link);
	free(header);


	return 0;
}

void InsertNode(head* header, int values)
{
	linkednode* NewNode = (linkednode*)malloc(sizeof(linkednode));
	NewNode->value = values;
	NewNode->index = header->size + 1;

	if (header->link == NULL)
	{
		header->link = NewNode;
	}
	else
	{
		linkednode* CircuitNode = (linkednode*)malloc(sizeof(linkednode));
		CircuitNode = header->link;

		for(int i = 1; i < header->size; i++)
		{
			CircuitNode = CircuitNode->rlink;
		}

		CircuitNode->rlink = NewNode;
		NewNode->llink = CircuitNode;
		header->link->llink = NewNode;
		NewNode->rlink = header->link;
	}
	header->size++;
}

void DeleteNode(head* header)
{
	int index = header->link->index; 
	int value = header->link->value; 

	printf("%d ", index);

	if (header->size == 1)
	{
		header->size--;
		return;
	}
	linkednode* RemoveNode = (linkednode*)malloc(sizeof(linkednode));
	RemoveNode = header->link; 

	if (value > 0)
	{
		for (int i = 0; i < value; i++)
		{
			header->link = header->link->rlink;

			if (header->link == RemoveNode)
			{
				header->link = header->link->rlink;
			}
		}
	}
	else
	{
		for (int i = 0; i < value * (-1); i++)
		{
			header->link = header->link->llink;

			if (header->link == RemoveNode)
			{
				header->link = header->link->llink;
			}
		}
	}
	RemoveNode->llink->rlink = RemoveNode->rlink;
	RemoveNode->rlink->llink = RemoveNode->llink;

	free(RemoveNode);
	header->size--;
}