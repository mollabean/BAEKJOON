#define _CRT_SECURE_NO_WARNINGS
#define MAX(a,b) (a>b?a:b)
#include <stdio.h>
#include <math.h>
//1912
int main() {
    int n, result;
    int sum = 0;
    int max = -1001;
	int max1 = -1001;
    int ex[100001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ex[i]);
    }

    int i = 0;

	while (i < n)
	{
		if (ex[i] > 0)
		{
			sum = sum + ex[i];
			if (max < sum)
			{
				max = sum;
			}
		}
		else if (ex[i] < 0)
		{
			sum = 0;
		}
		i++;
	}

	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += ex[i];
		if (max1 < sum)
		{
			max1 = sum;
		}
		if (sum < 0)
		{
			sum = 0;
		}
		i++;
	}
	result = MAX(max, max1);
    printf("%d", result);
    return 0;
}