#include <stdio.h>
#include "cs50.h"
#include "cs50.c"
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]){
   

    if(argc != 2){
        printf("Missing command line argument\n");
        return 1;
    }

    printf("hello, %s",argv[1]);
    return 0;
}