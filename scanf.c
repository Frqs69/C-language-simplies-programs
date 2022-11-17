#include <stdio.h>

int main(void){
    char * x = malloc(4);
    printf("x: ");
    scanf("%s", x);
    printf("x: %s\n", x);
    free(x);
}
