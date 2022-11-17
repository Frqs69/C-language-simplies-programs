#include <stdio.h>
#include "cs50.h"
#include "cs50.c"
#include <string.h>

int string_length(string name);

int main(void){

   string name = get_string("Name: ");
   int length = strlen(name);

   printf("Length: %i\n",length);
}

