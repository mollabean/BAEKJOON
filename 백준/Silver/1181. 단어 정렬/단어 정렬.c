#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 단어 정보를 저장하는 구조체
typedef struct {
    int word_length;       // 단어의 길이
    char word_text[51];    // 단어의 내용 (최대 길이 50)
} Word;

// 비교 함수, qsort에 사용
int compare(const void *first, const void *second) {
    Word first_word = *(Word *)first;
    Word second_word = *(Word *)second;
    
    // 단어 길이를 기준으로 정렬
    if (first_word.word_length > second_word.word_length) {
        return 1;
    }
    else if (first_word.word_length < second_word.word_length) {
        return -1;
    }
    
    // 단어 길이가 같으면 사전순으로 정렬
    return strcmp(first_word.word_text, second_word.word_text);
}

int main() {
    int word_count; // 입력받을 단어의 개수
    
    // 단어 개수 입력
    scanf("%d", &word_count);
    
    // 단어 배열 생성
    Word word_array[word_count];
    
    // 단어 입력
    for (int i = 0; i < word_count; i++) {
        scanf("%s", word_array[i].word_text); // 단어 내용 입력
        word_array[i].word_length = strlen(word_array[i].word_text); // 단어 길이 계산
    }
    
    // 단어 배열 정렬
    qsort(word_array, word_count, sizeof(Word), compare);
    
    // 첫 번째 단어 출력
    printf("%s\n", word_array[0].word_text);
    
    // 중복 제거 후 단어 출력
    for (int i = 1; i < word_count; i++) {
        if (strcmp(word_array[i - 1].word_text, word_array[i].word_text)) {
            printf("%s\n", word_array[i].word_text);
        }
    }
    
    return 0;
}
