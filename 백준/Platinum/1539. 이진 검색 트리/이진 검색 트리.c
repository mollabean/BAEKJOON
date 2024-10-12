#include <stdio.h>
#include <stdlib.h>

#define MAX_N 250002

int heights[MAX_N]; // 각 숫자의 높이를 저장하는 배열
int arr[MAX_N];     // 정렬된 배열을 대신하는 배열
int size = 0;       // 배열의 크기

// 이진 탐색을 통해 lower bound를 찾는 함수
int lower_bound(int arr[], int size, int target) {
    int low = 0, high = size;
    while (low < high) {
        int mid = (low + high) / 2;
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;  // lower bound 위치 반환
}

// 새로운 숫자를 삽입하는 함수
void insert(int arr[], int *size, int value) {
    int pos = lower_bound(arr, *size, value);
    // 삽입할 위치부터 끝까지 이동
    for (int j = *size; j > pos; j--) {
        arr[j] = arr[j - 1];
    }
    arr[pos] = value; // 새로운 값 삽입
    (*size)++;        // 크기 증가
}

// 메인 함수
int main() {
    long long result = 0;
    int N;
    int inNum = 0;

    // 입력 받기
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        // 새로운 숫자 입력 받기
        scanf("%d", &inNum);

        // 정렬된 배열에서 lower bound 찾기
        int pos = lower_bound(arr, size, inNum);
        long long left, right;

        // 왼쪽 높이 계산 (lower bound 이전 값)
        if (pos > 0) {
            left = heights[arr[pos - 1]];
        } else {
            left = 0;
        }

        // 오른쪽 높이 계산 (lower bound 위치 값)
        if (pos < size) {
            right = heights[arr[pos]];
        } else {
            right = 0;
        }

        // 새로운 높이를 계산하여 저장
        heights[inNum] = (left > right ? left : right) + 1;

        // 배열에 새로운 값을 삽입
        insert(arr, &size, inNum);

        // 결과에 새로 추가된 높이를 더함
        result += heights[inNum];
    }

    // 최종 결과 출력
    printf("%lld\n", result);

    return 0;
}
