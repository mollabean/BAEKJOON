#include <stdio.h>

int test;

int main() {
	scanf("%d", &test);
	if (0 <= test <= 100) {
		if (90 <= test  && test <= 100) {
			printf("A");
		}
		else if (80 <= test && test < 90) {
			printf("B");
		}
		else if (70 <= test && test < 80) {
			printf("C");
		}
		else if (60 <= test && test < 70) {
			printf("D");
		}
		else if (test < 60) {
			printf("F");
		}
		return 0;
	}
	else return 0;
}
