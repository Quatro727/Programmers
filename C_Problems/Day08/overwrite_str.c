#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN_INPUT 1001  

char *solution(const char *my_string, const char *overwrite_string, int n);

int main(void)
{
    char str1[LEN_INPUT];
    char str2[LEN_INPUT];
    char *result;
    int n;

    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%d", &n);

    result = solution(str1, str2, n);

    printf("%s\n", result);

    return 0;
}

char *solution(const char *my_string, const char *overwrite_string, int s)
{
    int i, len1, len2;

    len1 = strlen(my_string);
    len2 = strlen(overwrite_string);

    char *answer = malloc(sizeof(char) * (len1 + 1));
    if(answer == NULL) {
        printf("malloc failed.\n");

        return NULL;
    }

    for(i = 0; i < len1; i++) {
        if(i >= s && i < len2 + s) {
            answer[i] = overwrite_string[i - s];
        }
        else {
            answer[i] =my_string[i];
        }
    }
    answer[i] = '\0';

    return answer;
}
