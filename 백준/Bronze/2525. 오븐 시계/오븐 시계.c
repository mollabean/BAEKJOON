#include <stdio.h>

int a, b, c, bcs,bcs1,bcs2,a1,a2;
int main() {
	scanf("%d %d", &a, &b);
	scanf("%d", &c);

	if (0 <= a && a <= 23) {
		if (0 <= b && b <= 59) {
			if (0 <= c && c <= 1000) {
				bcs = b + c;
				if (bcs >= 60) {
					bcs1 = bcs % 60;
					bcs2 = bcs / 60;
					a1 = a + bcs2;
						if (a1 >= 24) {
							a2 = a1 - 24;
							printf("%d %d", a2, bcs1);
							return 0;
						}printf("%d %d", a1, bcs1);
						return 0;
				}printf("%d %d", a, bcs);
				return 0;
			}
		}
	}
	else return 0;
}