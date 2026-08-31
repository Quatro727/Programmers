#include <stdio.h>
#include <stdlib.h>

int  *solution(int n);

int main(void)
{
    int num;
    int *num_list;

    printf("Enter an integer: ");
    scanf("%d", &num);

    num_list = solution(num);

    if(num % 2 == 0) {
        for(int i = 0; i < num / 2; i++) {
            printf("%d ", num_list[i]);
        }
        printf("\n");
    }
    else { 
        for(int i = 0; i < num / 2 + 1; i++) {
            printf("%d ", num_list[i]);
        }
        printf("\n");
    }
    free(num_list);

    return 0;
}

int *solution(int n)
{
    int *answer;
    int i;

    if(n % 2 == 0)
        n -=1;

    answer = malloc(n / 2 * sizeof(int));
    if(answer == NULL) {
        printf("malloc failed...\n");
        exit(EXIT_FAILURE); 
    }

    for(i = 0; i < n / 2 + 1; i++) {
        answer[i] = 2 * i + 1;
    }
    return answer;
}

        

