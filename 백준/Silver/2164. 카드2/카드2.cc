#include <stdio.h>
#include <stdlib.h>

typedef struct QueueNode{
	struct QueueNode* next;
	int value;
}QueueNode;

typedef struct QueueType{
	QueueNode *rear;
	QueueNode *front;
	int count;
}QueueType;

void init_queue(QueueType *type){
	type->rear = type->front = NULL;
	type->count = 0;
}

void Enqueue(QueueType* type, int data){
	QueueNode *node=(QueueNode *)malloc(sizeof(QueueNode));
	node->next = NULL;
	node->value = data;
	if(type->rear == NULL) {
		type->rear = type->front = node;
	}
	else {
		type->rear->next = node;
		type->rear = node;
	}
	type->count++;
}

int Dequeue(QueueType *type){
	if(type->front == NULL) return 0;
	int value = type->front->value;
	type->front = type->front->next;
	type->count--;
	return value;
}

void Shuffle_Queue (QueueType *type){
	Enqueue(type,Dequeue(type));
}
int main(){
	int N; scanf("%d",&N);
	QueueType type;
	init_queue(&type);
	for(int i = 1; i <=N; i++) Enqueue(&type,i);
	int state = 1;
	while(type.count >1){
		if (state ==1) { Dequeue(&type); state = 0;}
		else {  Shuffle_Queue(&type); state=1; }
	}
	printf("%d", type.front->value);
	
}