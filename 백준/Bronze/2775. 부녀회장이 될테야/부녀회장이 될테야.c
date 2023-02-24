#include <stdio.h>

int kn[15][15] = { 0 };
void top() {
	int k, n;
	scanf("%d", &k);
	scanf("%d", &n);
	for (int i = 0; i < k + 1; i++) {
		kn[i][0] = 1;
	}

	for (int i = 0; i < n; i++) {
		kn[0][i] = (i + 1);
	}

	for (int i = 1; i < k + 2; i++) {
		for (int j = 1; j < n + 1; j++) {
			kn[i][j] = (kn[i - 1][j] + kn[i][j - 1]);
		}
	}
	printf("%d\n", kn[k][n - 1]);
}

int main() {
	int C;
	scanf("%d", &C);
	for (int i = 0; i < C; i++) {
		top();
	}
	return 0;
}
