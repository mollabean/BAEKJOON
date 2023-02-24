#include <stdio.h>

int H, M, H1, H2, M2, M3;

int main() {
	scanf("%d %d", &H, &M);
	if (0 <= H && H <= 23) {
		if (0 <= M && M <= 59) {
			M2 = M - 45;
			if (M2 < 0) {
				M3 = M2 + 60;
				H1 = H - 1;
				if (H1 < 0) {
					H2 = H1 + 24;
					printf("%d %d", H2, M3);
					return 0;
				}
				printf("%d %d", H1, M3);
				return 0;
			}
			printf("%d %d", H, M2);
			return 0;
		}
	}
	else return 0;
}