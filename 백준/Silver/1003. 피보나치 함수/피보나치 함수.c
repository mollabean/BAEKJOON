#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


/*
int cnt0, cnt1;
int fibonacci(int n) {
    if (n == 0) {
        cnt0++;
        return 0;
    }
    else if (n == 1) {
        cnt1++;
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int a, n;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
        cnt0 = 0;
        cnt1 = 0;
        scanf("%d", &n);
        fibonacci(n);
        printf("%d %d\n", cnt0, cnt1);
	}
    return 1;
}
*/

int main() {
    int fib[41][2];
    int a, b, n;
    fib[0][0] = 1;
    fib[1][0] = 0;
    fib[0][1] = 0;
    fib[1][1] = 1;
    scanf("%d", &a);
    for (int n = 2; n < 41; n++) {
        fib[n][0] = fib[n - 1][0] + fib[n - 2][0];
        fib[n][1] = fib[n - 1][1] + fib[n - 2][1];
    }
    while (a--) {
        scanf("%d", &b);
        printf("%d %d\n", fib[b][0], fib[b][1]);
    }

    return 0;

}