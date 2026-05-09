#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* solution (int money){
    int* answer = (int*)malloc(2 * sizeof(int));

    if (answer == NULL) return NULL;

    if (money < 5500){
        *(answer) = 0;
        *(answer + 1) = money;
    }
    else {
        *(answer) = money / 5500;
        *(answer + 1) = money % 5500;
    }
    return answer;
}
