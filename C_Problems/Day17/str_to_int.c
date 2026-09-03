#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(const char *n_str);

int main(void)
{
    int result;
    char *num_str = "12345";

    result = solution(num_str);

    printf("Result: %d\n", result);

    return 0;
}

int solution(const char *n_str)
{
    int answer = 0;
    int len = strlen(n_str);

    int *tmp = malloc(sizeof(int) * len);
    
    for(int i = 0; i < len; i++) {
        tmp[i] = (int)n_str[i] - 48;
        for(int j = 0; j < len - i - 1; j++) {
            tmp[i] *= 10;
        }
        answer += tmp[i];
    }
    
    free(tmp);

    return answer;
}
