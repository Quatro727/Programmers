/**************************************************************
 * 01) 1 <= length of string <= 1,000,000
 * 02) no space between characters in string.
 * 03) when input a string, print the string
 * **************************************************************/


#include <stdio.h>

#define LEN_INPUT 1000001

int main(void)
{
    char s1[LEN_INPUT];
    scanf("%s", s1);

    printf("%s\n", s1);

    return 0;
}
