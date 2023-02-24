#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int number[100001];
int count = 0;

void push(int num) 
{
	number[count] = num;
	count++;
}

void pop()
{
	if (count != 0) {
		count--;
		printf("%d\n", number[count]);
		number[count] = 0;
	}
	else
		printf("-1\n");
}

void size() 
{
	printf("%d\n", count);
}

void empty()
{
	if (number[0] == 0) printf("1\n");
	else printf("0\n");
}

void top() 
{
	if (number[count-1] == 0) printf("-1\n"); 
	else printf("%d\n", number[count-1]);
}

int main() {
	int N;
	char input[100];
	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		scanf("%s", input);
		if (strcmp(input, "push") == 0) {
			int num;
			scanf("%d", &num);
			push(num);
		}
		else if (strcmp(input, "pop") == 0) {
			pop();
		}
		else if (strcmp(input, "size") == 0) {
			size();
		}
		else if (strcmp(input, "empty") == 0) {
			empty();
		}
		else if (strcmp(input, "top") == 0) {
			top();
		}
	}
}