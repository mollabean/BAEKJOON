#include <stdio.h>
#include <stdlib.h>

// 정렬을 위한 비교 함수
int compare(const void *first, const void *second) {
    int value1 = *(int *)first; // 첫 번째 값
    int value2 = *(int *)second; // 두 번째 값

    if (value1 < value2)
        return -1; // 오름차순 유지
    if (value1 > value2)
        return 1;  // 교환 필요
    return 0;      // 두 값이 같음
}

// 이진 탐색 함수
int binarySearch(int sorted_array[], int array_size, int target_value) {
    int left = 0;                           // 배열의 왼쪽 끝
    int right = array_size - 1;             // 배열의 오른쪽 끝

    while (left <= right) {                 // 탐색 범위가 유효할 때
        int middle = left + (right - left) / 2; // 중간 인덱스 계산
        if (sorted_array[middle] == target_value) {
            return middle;                  // 타겟 값을 찾음
        } else if (sorted_array[middle] < target_value) {
            left = middle + 1;              // 오른쪽 부분 탐색
        } else {
            right = middle - 1;             // 왼쪽 부분 탐색
        }
    }

    return -1;                              // 값을 찾지 못한 경우
}

int main() {
    int array_size;                         // 입력 배열 크기
    scanf("%d", &array_size);

    int original_array[1000000];            // 입력 배열
    int unique_sorted_array[1000000];       // 정렬된 유일한 값 저장 배열

    // 배열 입력
    for (int index = 0; index < array_size; index++) {
        scanf("%d", &original_array[index]);
        unique_sorted_array[index] = original_array[index]; // 복사
    }

    // 배열 정렬
    qsort(unique_sorted_array, array_size, sizeof(int), compare);

    // 중복 제거 및 유일 값 저장
    int unique_size = 0;                    // 유일 값 개수
    for (int index = 0; index < array_size; index++) {
        if (index == 0 || unique_sorted_array[index] != unique_sorted_array[index - 1]) {
            unique_sorted_array[unique_size] = unique_sorted_array[index];
            unique_size++;
        }
    }

    // 결과 출력
    for (int index = 0; index < array_size; index++) {
        int compressed_index = binarySearch(unique_sorted_array, unique_size, original_array[index]);
        printf("%d ", compressed_index);   // 압축된 인덱스 출력
    }

    return 0;
}
