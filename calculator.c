#include <stdio.h>
#include "cs50.h"
#include "cs50.c"

int main(void){
    // Prompt user for x
    int x = get_int("x: ");

    // Prompt user for y
    int y = get_int("y: ");
    
    // Divide x by y
    float z = (float)x / (float)y;

    // Show result
    printf("%f\n", z);
}