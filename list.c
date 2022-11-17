#include <stdio.h>

//structure
typedef struct node{
    int number;
    struct node* next;
}node;

int main(void){
    
    //old way
    // int list[3];
    // list[0] = 1;
    // list[1] = 2;
    // list[2] = 3;
    // for(int i=0; i<3; i++){
    //     printf("%i\n",list[i]);
    // }

//NEW WAY USEING  POINTERS
// dynamically allocate an array of size 3
//     int *list = malloc(3 * sizeof(int));

//     if(list == NULL) return 1;

// //assign 3 numbers to that array
//     list[0] = 1;
//     list[1] = 2;
//     list[2] = 3;

//     //Times passes

//     //Resize old array to be new array of size 4
//     int *tmp = realloc(list, 4 * sizeof(int));
//     if(tmp == NULL) {free(list);return 1;}

//     //Add fourth number to new array
//     tmp[3]=4;

// //Remember new array
//     list = tmp;

// //print new array
//     for (int i = 0; i < 4; i++)
//     {
//         printf("%i\n",list[i]);
//     }
    
//     //free memory
//     free(list);
//     return 0;

// NEW NEW WAY USEING SRUCTURE
    // List of sie 0
    node *list = NULL;

    //Add a number to list
    node* n = malloc(sizeof(node));

    if(n == NULL) {
        return 1;
    }

    n->number = 1;
    n->next = NULL;

    // update list to point to new node
    list = n;

    // add a number to list
    n = malloc(sizeof(node));

    if(n == NULL) {
        free(list);
        return 1;
    }

    n->number = 2;
    n->next = NULL;
    list->next = n;

    // add a number to list
    n = malloc(sizeof(node));

    if(n == NULL) {
        free(list->next);
        free(list);
        return 1;
    }

    n->number = 3;
    n->next=NULL;
    list->next->next=n;

    //Print numbers
    for(node* tmp = list; tmp != NULL; tmp=tmp->next){
        printf("%i\n", tmp->number);
    }


    //Free list
    while(list != NULL){
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
}
