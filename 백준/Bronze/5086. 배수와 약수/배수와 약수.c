#include <stdio.h>

int main() {
	while (1) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		else if (a < b && b % a == 0) {
			printf("factor\n");
		}
		else if (b < a && a % b == 0) {
			printf("multiple\n");
		}
		else printf("neither\n");
	}
	return 0;
}