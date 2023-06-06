#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 비교 함수
int compare(const void* a, const void* b) {
    char str1[20];
    char str2[20];
    sprintf(str1, "%d", *(const int*)a);
    sprintf(str2, "%d", *(const int*)b);
    char concat1[40];
    char concat2[40];
    sprintf(concat1, "%s%s", str1, str2);
    sprintf(concat2, "%s%s", str2, str1);
    return strcmp(concat2, concat1);
}

// 크기비교 함수
void compareSize(int* nums, int numsSize) {
    // nums 배열을 정렬
    qsort(nums, numsSize, sizeof(int), compare);

    // 정렬된 숫자들을 문자열로 변환하여 이어붙임
    char* result = (char*)malloc(sizeof(char) * 100000);
    strcpy(result, "");
    for (int i = 0; i < numsSize; i++) {
        char numStr[20];
        sprintf(numStr, "%d", nums[i]);
        strcat(result, numStr);
    }

    // 만들어진 문자열의 처음이 0이면 0 출력, 아니면 결과 문자열 출력
    if (result[0] == '0') {
        printf("0\n");
    } else {
        printf("%s\n", result);
    }

    free(result);
}

int main() {
    int n;
    scanf("%d", &n);

    int* nums = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    compareSize(nums, n);

    free(nums);

    return 0;
}
