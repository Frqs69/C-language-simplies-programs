#include <stdio.h>
#include "cs50.h"
#include "cs50.c"
#include <string.h>
#include <ctype.h>

int main(void){
   
    char* s = get_string("i: ");

    char* t = malloc(strlen(s) + 1);

    // Jeżeli nie będzie dostępnej pamięci zwraca błąd
    if(t == NULL) return 1;

    strcpy(t, s);

    // Zabezpieczenie przed t = pusty znak
    if(strlen(t) > 0) t[0] = toupper(t[0]);
    
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
    return 0;
}