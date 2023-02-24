#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[10000];
int sum = 0;
int z = 0;
void sort(int m, int n) {
	for (m; m <= n; m++) {
		for (int i = 2; i <= m; i++) {
			if (m % i == 0 && i != m) break;
			else if (m-1 % i != 0 && i == m)
			{
				arr[z] = m;
				z++;
				sum += m;
			}
		}
	}
	if (arr[0] == NULL) printf("-1");
	else
	{
		printf("%d\n", sum);
		printf("%d", arr[0]);
	}
}


int main() {
	int M, N;
	scanf("%d %d", &M, &N);
	if (M > 10000 && N > 10000) return 0;
	if (M > N) return 0;
	sort(M, N);
	return 0;
}