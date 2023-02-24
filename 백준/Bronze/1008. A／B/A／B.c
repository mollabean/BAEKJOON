#include <stdio.h>

int main(void) {
	double x;
	double y;
    
    scanf("%lf %lf", &x, &y);
	printf("%.9lf", x/y);
	return 0;

}