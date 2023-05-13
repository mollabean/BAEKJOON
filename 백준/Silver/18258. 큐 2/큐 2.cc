#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_QUEUE_SIZE 2000001

typedef struct Queue {
	int front, rear;
	int data[MAX_QUEUE_SIZE];
}Queue;

void init_queue(Queue* q)
{
	q->front = 0;
	q->rear = 0;
}

int is_empty(Queue* q) {
	return (q->front == q->rear);
}

int is_full(Queue* q) {
	return ((q->rear + 1) % MAX_QUEUE_SIZE) == q->front;
}

void enqueue(Queue* q, int input) {
	if (is_full(q)) {
		return;
	}
	q->data[q->rear] = input;
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
}

int dequeue(Queue* q) {
	if (is_empty(q)) {
		return -1;
	}
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front-1]; 
}

int size(Queue* q) {
	return (q->rear - q->front);
}

int front(Queue* q) {
	if (is_full(q)) {
		return -1;
	}

	if (is_empty(q)) {
		return -1;
	}
	return q->data[q->front];
}

int back(Queue* q) {
	if (is_full(q)) {
		return -1;
	}

	if (is_empty(q)) {
		return -1;
	}
	return q->data[(q->rear)-1];
}

int main() {
	int T;
	char command[10];
	Queue q;
	init_queue(&q);
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%s", &command);
		if (!strcmp(command, "push")) {
			int x;
			scanf("%d", &x);
			enqueue(&q, x);
		}
		else if (!strcmp(command, "pop")) {
			printf("%d\n", dequeue(&q));
		}
		else if (!strcmp(command, "size")) {
			printf("%d\n", size(&q));
		}
		else if (!strcmp(command, "empty")) {
			printf("%d\n", is_empty(&q));
		}
		else if (!strcmp(command, "front")) {
			printf("%d\n", front(&q));
		}
		else if (!strcmp(command, "back")) {
			printf("%d\n", back(&q));
		}
	}
	return 0;
}