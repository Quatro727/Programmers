#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution (int n){
    int answer = 0;

    if (n % 7 == 0){
        answer = n / 7;
    }
    else{
        answer = n / 7 + 1;
    }
    return answer;
}

/*****************************************************
 *  <Another code>
 *  int answer = 0;
 *  answer = n / 7 + ((n % 7 == 0) ? 0 : 1)
 *
 *  return answer;
 *  **************************************************/

/*****************************************************
 * <Another code 02>
 * int answer = 0;
 *
 * answer = n / 7 + !(n % 7 == 0);
 *
 * return answer;
 * ***************************************************/
