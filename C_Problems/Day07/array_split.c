#include <stdio.h>
#include <stdlib.h>


int *array_split(int numbers[], size_t numbers_len, int num1, int num2);

int main(void)
{
    int nums[5] = {1, 2, 3, 4, 5};
    int a,b;
    int *result;
    int i = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    result = array_split(nums, 5, a, b);

    while(result[i] != 0) {
        printf("%d ", result[i]);
        i++;
    }
    printf("\n");
    
    free(result);
    return 0;
}

int *array_split(int numbers[], size_t numbers_len, int num1, int num2)
{
    int *answer = calloc(numbers_len, sizeof(int));
    int i, j;

    for(i = num1, j = 0; i <= num2; i++, j++) {
        answer[j] = numbers[i];
    }
    return answer;
}


