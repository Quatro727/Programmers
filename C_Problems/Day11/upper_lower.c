#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 1001

char *solution(const char *my_str);

int main(void)
{
    char str[LEN];

    printf("Enter a string: ");

    scanf("%s", str);

    char *result = solution(str);

    printf("%s\n", result);

    free(result);

    return 0;
}

char *solution(const char *my_str)
{
    int i;
    int len = strlen(my_str);
    
    char *answer = malloc(sizeof(char) * (len + 1));
    if(answer == NULL) {
        printf("malloc is failed...\n");
        return NULL;
    }
    
    for(i = 0; i < len; i++) {
        if(my_str[i] >= 97 && my_str[i] <= 122) {
            answer[i] = my_str[i] - 32;
        }
        else if(my_str[i] >= 65 && my_str[i] <= 90) {
            answer[i] = my_str[i] + 32;
        }
        else {
            printf("Some characters is not a alphabet....\n");
            printf("Please type it again....\n");
            exit(1);
        }
    }
    answer[len] = '\0';

    return answer;
}
