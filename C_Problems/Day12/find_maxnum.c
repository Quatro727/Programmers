#include <stdio.h>
#include <stdlib.h>

#define LEN 100

int *solution(int arr[], size_t arr_len);

int main(void)
{
    int len;
    int i;
    int *result;

    printf("Enter a length of array: ");
    scanf("%d", &len);

    int num[len];

    printf("Enter a elements of array: ");
    for(i = 0; i < len; i++) {
        scanf("%d", num + i);
    }

    result = solution(num, len);
    printf("Max number and index in integer array: %d %d\n", result[0], result[1]);
    
    free(result);

    return 0;
}

int *solution(int arr[], size_t arr_len)
{
    int i;
    int *answer = malloc(sizeof(int) * 2);

    answer[0] = arr[0];
    answer[1] = 0;
    for(i = 0; i < arr_len; i++) {
        if(answer[0] < arr[i]) {
            answer[0] = arr[i];
            answer[1] = i;
        }
    }
    return answer;
}
