#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char* solution (const char*, int);

int main(){
    //원본 문자열과 반복 횟수
    char str[6];
    int n;
    scanf("%s", str);
    scanf("%d", &n);
    
    //문자열 반복 함수 호출 및 결과 저장
    char* result = solution (str, n);

    printf("%s\n", result);
    
    //메모리 반납
    free(result);
    result = NULL;

    return 0;
}
//문자열 반복 함수
char* solution (const char* my_string, int n){
    //원본 문자열의 길이
    int org_len = strlen(my_string);

    //결과값을 위한 길이
    int len = org_len * n;

    //결과 문자열 저장을 위한 메모리 할당
    char* answer = (char*)malloc(len * sizeof(char) + 1);
    
    //문자열 반복 -> 결과 문자열에 저장
    for (int i =0;i < org_len;i++){
        for (int j = 0;j < n;j++){
            answer[i*n + j] = my_string[i];
        }
    }

    //맨 마지막에 NULL 문자 할당
    answer[len]='\0';
    
    return answer;
}
