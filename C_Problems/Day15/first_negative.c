#include <stdio.h>

int solution(int num_list[], size_t num_list_len);

int main(void)
{
    int result;
    int num[7] = {12, 4, 46, 38, -2, 15};

    result = solution(num, 7);

    printf("First index of negative integer: %d\n", result);

    return 0;
}

int solution(int num_list[], size_t num_list_len)
{
    int i;
    int answer = -1;

    for(i = 0; i < num_list_len; i++) {
        if(num_list[i] < 0) { 
            answer = i;
            break;
        }
    }
    return answer;
}
