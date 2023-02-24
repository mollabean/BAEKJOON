#include <stdio.h>
int a, b;
int main() {
	scanf("%d %d", &a, &b);
	if (-10000 <= a <= 10000 && -10000 <= b <= 10000)
	{
		if (a < b) {
			printf("<");
		}
		else if (a == b) {
			printf("==");
		}
		else printf(">");
		return 0;
	}
	else return 0;
}