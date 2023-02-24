#include <stdio.h>

int yyear;
int main() {
	scanf("%d", &yyear);
	if (1 <= yyear && yyear <= 4000) {
		if (yyear % 4 == 0 && yyear % 100 != 0) {
			printf("1");
		}

		else if (yyear % 4 == 0 && yyear % 400 == 0)
		{
			printf("1");
		}

		else printf("0");
		return 0;
	}
	else return 0;
}