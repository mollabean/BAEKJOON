#include <stdio.h>
int a, b, c, d, i, e, sum = 0;

int main() {
	scanf("%d", &a);
	scanf("%d", &b);
	for (i = 1; i <= b; i++) {
		scanf("%d %d", &c, &d);
		e = c * d;
		sum += e;
	}
	if (sum == a) {
		printf("Yes");
	}
	else printf("No");
	return 0;
}