#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long R[50] = { 0 }; //출력값 저장위치
int count = 0;
void donation(int N) {
	long P[300] = { 0 };
	long k, d, a, n;
	long sum = 0;
	scanf("%ld", &n);
	for (int i = 0; i < n * 3; i += 3) {
		scanf("%ld %ld %ld", &P[i], &P[i + 1], &P[i + 2]);
	}
	//P[i]->K P[i+1]->D P[i+2]->A
	scanf("%ld %ld %ld", &k, &d, &a);
	for (int i = 0; i < n * 3; i += 3) {
		if (P[i] * k - P[i + 1] * d + P[i + 2] * a < 0) continue;
		else {
			sum += P[i] * k - P[i + 1] * d + P[i + 2] * a;
			R[count] = sum;
		}
	}
	count++;
}

int main() {
	int N;
	scanf("%d", &N);

	for (int j = 0; j < N; j++) {
		donation(N);
	}

	for (int i = 0; i < N; i++) {
		printf("%ld\n", R[i]);
	}

	return 0;
}