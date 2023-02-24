#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



void test() {
	int a, b, c , N, M;
	scanf("%d", &c);
	while (c--) {
		scanf("%d %d", &N, &M);
		for (int i = 0; i < M; i++) {
			scanf("%d %d", &a, &b);
		}
		printf("%d\n", N - 1);
	}
}

int main() {
	test();
	return 0;
}