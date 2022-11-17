#include <stdio.h>
#include "cs50.h"
#include "cs50.c"

int main(void){
    int points = get_string("How many points did you lose? ");
    const int MYPOINTS = 2;

    if(points < MYPOINTS){
        printf("You lose fewer points than me.\n");
    }   else  if(points > MYPOINTS){
        printf("You lose more points than me.\n");
    }   else{
        printf("You lose the same number of points as me.\n");
    }
}