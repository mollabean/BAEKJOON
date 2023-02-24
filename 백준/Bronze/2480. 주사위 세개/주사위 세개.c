#include <stdio.h>
int a, b, c;
int main() {
	scanf("%d %d %d", &a, &b, &c);
	if (1 <= a && a <= 6 && 1 <= b && b <= 6 && 1 <= c && c <= 6) {
		if (a == b && b == c) {
			printf("%d", 10000 + a * 1000);
		}
		else if (a == b || b == c || a == c) {
	
			if (a == b) {
				printf("%d", 1000 + a * 100);
			}
			if (c == b) {
				printf("%d", 1000 + b * 100);
			}
			if (a == c) {
				printf("%d", 1000 + c * 100);
			}
		}
		else if (a < c && b < c && a != b) {
			printf("%d", c * 100);
		}
		else if (a > b && c < a && b != c) {
			printf("%d", a * 100);
		}
		else if (a < b && b > c && a != c) {
			printf("%d", b * 100);
		}
		else return 0;
	}
	else
	return 0;
}