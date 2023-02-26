#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T, A;
	int cnt = 0;
	int N[100];
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N[i]);
	}
	scanf("%d", &A);
	for(int i = 0; i < T; i++){
		if (N[i] == A) {
			cnt++;
		}
	}
	printf("%d", cnt);
}