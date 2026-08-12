/*********************************************************
 * 01) given a string consists of alphabetic characters
 * 02) convert the characters in string
 *     upper-cse to lower-case, lower-case to uppercase
 **********************************************************/

#include <stdio.h>
#include <string.h>

#define LEN_INPUT 21 

int main(void)
{
    char s1[LEN_INPUT];
    int i;

    scanf("%s", s1);
    
    int len = strlen(s1);

    for(i = 0; i < len; i++){
        if(s1[i] >= 65 && s1[i] <= 90){
            s1[i] = s1[i] + 32;
        }
        else {
            s1[i] = s1[i] - 32;
        }
    }

    printf("%s", s1);

    return 0;
}


