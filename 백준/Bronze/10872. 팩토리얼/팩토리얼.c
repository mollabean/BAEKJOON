#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum = 1;
void factorial(int x) {
	if (x != 0) {
		sum *= x;
		x--;
		factorial(x);
	}	
}

int main() {
	int A;
	scanf("%d", &A);
	factorial(A);
	printf("%d ", sum);
	return 0;
}