#include <stdio.h>
#include "cs50.h"
#include "cs50.c"

int main(void){
    //Prompt use to agree
    char c = get_char("Do you agree? ");

    // Check whether user agreed
    if(c=='y' || c=='Y'){
        printf("Agreed.\n");
    }else if(c=='n' || c=='N'){
        printf("Not agreed.\n");
    }
}