#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int store[10000];
int l = 0;

void push(int x){
	store[l] = x;
	l++;
}

int pop() {
	if (empty()) return -1;
	else {
		l--;
		return store[0];
	}
}

void setting() {
	for (int i = 0; i < l; i++) {
		store[i] = store[i + 1];
	}
}

int empty() {
	if (l == 0) return 1;
	else return 0;
}

int front() {
	if (empty()) return -1;
	else return store[0];
}

int back() {
	if (empty()) return -1;
	else return store[l-1];
}

int main() {
	int T;
	char command [10];
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%s", &command);
		if(!strcmp(command, "push")) {
			int x;
			scanf("%d", &x);
			push(x);
		}
		else if (!strcmp(command,"pop")) {
			printf("%d\n", pop());
			setting();
		}
		else if (!strcmp(command, "size")) {
			printf("%d\n", l);
		}
		else if (!strcmp(command, "empty")) {
			empty();
			printf("%d\n", empty());
		}
		else if (!strcmp(command, "front")) {
			front();
			printf("%d\n", front());
		}
		else if (!strcmp(command, "back")) {
			back();
			printf("%d\n", back());
		}
	}
	return 0;
}