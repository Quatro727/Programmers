#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 101

char *solution(const char *my_string, const char *letter);

int main(void)
{
    char str[MAX_LEN];
    char letter;
    char *p;

    scanf("%s", str);
    scanf(" %c", &letter);

    p = solution(str, &letter);

    printf("%s\n", p);
    
    free(p);
    return 0;
}

//Eliminate the all selected letter in strings
char *solution(const char *my_string, const char *letter)
{
    int len = strlen(my_string);
    int i, j;
    
    char *answer = malloc(len + 1);
    if(answer ==NULL ) return NULL;

    for(i = 0, j = 0; i < len; i++){
         if(my_string[i] == *letter) {
             continue;
         }
         answer[j] = my_string[i];
         j += 1;
    }
    answer[j] = '\0';

    return answer;
}
