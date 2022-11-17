#include <stdio.h>
#include "cs50.h"
#include "cs50.c"

typedef char *string;

int main(void){
   
    // char  *s = "Hi!";;
    // printf("%c\n", *s);
    // printf("%c\n", *(s+1));
    // printf("%c\n", *(s+2));

    int numbers[] = {1,2,3,4,5,6,7};

    printf("%i\n", *numbers);
    printf("%i\n", *(numbers+1));
    printf("%i\n", *(numbers+2));
}