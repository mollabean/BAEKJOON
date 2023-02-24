#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int torret() {
	int x1, y1, x2, y2, r1, r2;
	scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
	double d = sqrt(pow((x1 - x2),2) + pow((y1 - y2), 2));
	if ((r1 + r2) == d) {
		printf("1\n");
	}
	else if (r1 == r2 && d == 0) {
		printf("-1\n");
	}
	else if (r1 + r2 < d) {
		printf("0\n");
	}
	else if(abs(r1-r2) > d){
		printf("0\n");
	}
	else if (abs(r1-r2) == d) {
		printf("1\n");
	}
	else{
		printf("2\n");
	}
	return 1;
}
int main() {
	int C;
	scanf("%d", &C);
	for (int i = 0; i < C; i++) {
		torret();
	}
	return 0;
}