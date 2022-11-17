#include <stdio.h>
#include "cs50.h"
#include "cs50.c"

float discount(float price, int percent);

int main(void){
    float regular = get_float("Regular price: ");
    int percent_off = get_int("Percent Off: ");
    float sale = discount(regular, percent_off);
    printf("Sale price: %.f\n", sale);
}

float discount(float price, int percent){
    return price * (100 - percent) / 100;
}