#include <stdio.h>
#include <stdlib.h>

int *solution(int num_list[], size_t len, int n);

int main(void)
{
    int num[6] = {4,2,6,1,7,6};
    int n;
    int *result;

    printf("Enter a integer(interval): ");
    scanf("%d", &n);

    result = solution(num, 6, n);

    for(int i = 0; i < 6 / n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);

    return 0;
}

int* solution(int num_list[], size_t len, int n)
{
    int i, j;
    int *answer;
    int solution_len;

    if(n >= len) { 
        solution_len = 1;

        answer = malloc(sizeof(int) * 1);
        if(answer == NULL) {
            printf("malloc failed...\n");
            exit(1);
        }
    }
    else if (len % n == 0) {
        solution_len = len / n;

        answer = malloc(sizeof(int) * solution_len);
        if(answer == NULL) {
            printf("malloc failed...\n");
            exit(1);
        }
    }
    else {
        solution_len = len / n + 1;

        answer = malloc(sizeof(int) * solution_len);
        if(answer == NULL) {
            printf("malloc failed...\n");
            exit(1);
        }
    }

    for(i = 0, j = 0; i < solution_len; i++) {
        answer[i] = num_list[j];
        
        j = j + n;
    }

    return answer;
}

