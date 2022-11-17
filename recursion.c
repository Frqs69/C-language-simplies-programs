#include <stdio.h>
#include "cs50.h"
#include "cs50.c"

void draw(int n);

int main(void){
   
    int height = get_int("height: ");

    while(height!=0){
        int n = silnia(height);
        printf("%i \n", n);
        height--;
    }
}

void draw(int n) {
   
   if(n<0) return 1;

    draw(n-1);

    for(int i = 0; i < n; i++){
        printf("#");
    }
    printf("\n");
}



int silnia(int n){

    if(n<2) return 1;

    

     return n * silnia(n-1);



}