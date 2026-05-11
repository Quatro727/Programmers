#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* solution(int num_list[], size_t numn_list_len){
    int* answer = (int*)malloc(sizeof(int) * num_list_len);
    
    for (int i = 0; i < num_list_len; i++){
        answer[i] = num_list[num_list - i];
    }

    return answer;
}
