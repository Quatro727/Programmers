#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 101

int solution(const char *str1, const char *str2);

int main(void)
{
    const char str1[LEN] = "abc6CDE443fgh22iJKlmn1o";
    const char str2[LEN] = "6CD";

    printf("Result:  %d\n", solution(str1,str2));

    return 0;
}


int solution(const char *str1, const char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char tmp[len2 + 1];
    int answer = 2;
    
    if(len1 < len2) 
        return answer;
    else {

        for(int i = 0; i < len1 - len2; i++) {
            int j;
            for(j = 0; j < len2; j++) {
                tmp[j] = str1[j + i];
            }
            tmp[j] = '\0';

            if(strcmp(str2, tmp) == 0) {
                answer = 1;
                return answer;
            }
        }
    }
    return answer;
}

