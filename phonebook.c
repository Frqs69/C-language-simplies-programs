#include <stdio.h>
#include "cs50.h"
#include "cs50.c"
#include <string.h>

typedef struct{
    string name;
    string number;
} Person;

int main(void){
   
   Person people[2];

   people[0].name = "Carter";
   people[0].number = "731110252";

   people[1].name = "David";
   people[1].number = "519600942";

    for(int i = 0; i < 2;i++){
        if(strcmp(people[i].name, "David")==0){
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}