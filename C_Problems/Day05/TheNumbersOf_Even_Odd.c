#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution (int[] , size_t);

int main(){
    int n;
    scanf("%d", &n);

    int* num = (int*)calloc(n, sizeof(int));
    if (num ==NULL) exit(1);

    for (int i = 0;i < n;i++){
        scanf("%d", num + i);
    }


    int* result = solution(num, n);
    printf("%d %d\n", result[0], result[1]);
    
    free(num);
    free(result);
    
    num = NULL;
    result = NULL;
    return 0;
}

int* solution (int num_list[], size_t num_list_len){
    int* answer = (int*)calloc(2, sizeof(int));
    for (int i = 0;i < num_list_len;i++){
        if (num_list[i] % 2 == 0){
            answer[0]++;
        }
        else{
            answer[1]++;
        }
    }
    return answer;
}
