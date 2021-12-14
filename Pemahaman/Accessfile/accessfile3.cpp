#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

struct list {
    char *string;
    struct list *next;
};

typedef struct list LIST;

int main(void) {
    FILE *fp;
    char line[5];
    LIST *current, *head;

    head = current = NULL;
    fp = fopen("test.txt","r");

    while(fgets(line, sizeof(line), fp)){
        LIST *node = (struct list*)malloc(sizeof(struct list));
        node->string = strdup(line);//note : strdup is not standard function
        node->next =NULL;

        if(head == NULL){
            current = head = node;
        } else {
            current = current->next = node;
        }
    }
    fclose(fp);
    //test print
    for(current = head; current ; current=current->next){
        printf("%s", current->string);
    }
}
