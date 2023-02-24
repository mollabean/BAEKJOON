#include <stdio.h>
int i, j, n;
int main() {
	scanf("%d", &n);
	if (1 <= n && n <= 9) {
		for (i = n; i <= n; i++) {
			for (j = 1; j < 10; j++) {
				printf("%d * %d = %d\n", i, j, i * j);
			}
		}
	}
	return 0;
}