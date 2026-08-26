#include <stdio.h>
#include <stdlib.h>

int *solution(int n, int numlist[], size_t numlist_len);

int main(void)
{
    int i = 0;
    int n = 3;
    int numlist[9] = {4, 5, 6, 7, 8, 9, 10, 11, 12};
    int len = 0;

    int *result = solution(3, numlist, 9);

    while(result[i] != 0) {
        len++;
        i++;
    }
    for(i = 0; i < len; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);

    return 0;
}

int *solution(int n, int numlist[], size_t numlist_len)
{
    int i, j;
    
    int *answer = calloc(numlist_len, sizeof(int));

    for(i = 0, j = 0; i < numlist_len; i++) {
        if(numlist[i] % n == 0) {
            answer[j] = numlist[i];
            j++;
        }
    }

    return answer;
}

