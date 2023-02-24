#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int arr[100001];
int curr = 0;
void zero(int num){
		if (num != 0) {
			arr[curr] = num;
			curr++;
		}
		else {
			arr[curr - 1] = 0;
			curr--;
		}
}

void print() {
	curr = 0;
	int sum = 0;
	while (arr[curr] != NULL) {
		sum += arr[curr];
		curr++;
	}
	printf("%d", sum);
}

int main() {
	int num;
	int k;
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d", &num);
		zero(num);
	}
	print();
}