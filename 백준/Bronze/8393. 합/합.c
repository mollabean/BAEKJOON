#include <stdio.h>
int a,i, sum;
sum = 0;
int main() {
	scanf("%d", &a);
		for (i = 1; i <= a; i++) {
			sum += i;
		}
	printf("%d", sum);
		return 0;
}