#include <stdio.h>
#include "cs50.h"
#include "cs50.c"

int main(void){
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);
}