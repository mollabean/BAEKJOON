#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char def[1001];
	int T;
	scanf("%d", &T);
	while (T--) {
		scanf("%s", &def);
		printf("%c%c\n", def[0], def[strlen(def)-1]);
	}
	return 0;
}