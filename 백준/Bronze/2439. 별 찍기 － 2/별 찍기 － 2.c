#include <stdio.h>
int a,i,l;
int main() {
	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		for (int p = 1; p <= a - i; p++) {
			printf(" ");
		}
			for (l = 1; l <= i; l++) {
				printf("*");
			}
		printf("\n");
	}
	return 0;
}