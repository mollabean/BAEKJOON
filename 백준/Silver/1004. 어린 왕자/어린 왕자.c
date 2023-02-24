#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void lp() {
	int x1, x2, y1, y2, cx, cy, r, a, count = 0;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d %d %d", &cx, &cy, &r);
		if (pow((cx - x1), 2) + pow((cy - y1), 2) < pow(r, 2))
			if (pow((cx - x2), 2) + pow((cy - y2), 2) > pow(r, 2))
				count++;
		if (pow((cx - x1), 2) + pow((cy - y1), 2) > pow(r, 2))
			if (pow((cx - x2), 2) + pow((cy - y2), 2) < pow(r, 2))
				count++;
	}
	printf("%d\n", count);
}

int main() {
	int C;
	scanf("%d", &C);
	for (int i = 0; i < C; i++) {
		lp();
	}
	return 0;
}