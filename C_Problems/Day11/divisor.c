#include <stdio.h>
#include <stdlib.h>

int *solution(int n);

int main(void)
{
    int num, i;
    int *result;

    printf("Enter a integer(1<= number <= 10,000): ");
    scanf("%d", &num);

    result = solution(num);

    for(i = 0; result[i] != 0; i++) {
        printf("%d ", *(result + i));
    }
    printf("\n");

    free(result);

    return 0;
}

int *solution(int n)
{
    int i = 0;
    int j = 1;

    int *answer = calloc(n, sizeof(int));

    while(j != n) {
        if(n % j == 0) {
            answer[i] = j;
            i++;
            j++;
        }
        else {
            j++;
        }
    }
    answer[i] = n;

    return answer;
}
