#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
using namespace std;

struct node{
    char word[20];
    char meaning[5][100]; //2D array for saving multiple meanings of a word
    struct node *next;
};

void ReadData(struct node *head)
{
    struct node *tail;
    FILE *fp = fopen("dictionary.data", "rb");
    if(fp == NULL)
    {
        printf("Error opening file..\n");
        return;
    }
    while(!feof(fp))
    {
        tail = (struct node*)calloc(1, sizeof(struct node));
        fread(tail->word, sizeof(head->word), 1, fp);
        fread(tail->meaning, sizeof(head->meaning), 1, fp);
        if(head == NULL) //for fresh run head is initialized with NULL
        {
            tail->next = head;
            head = tail;
        }
        else
        {
            head->next = tail;
            head = head->next;
        }
    }
    fclose(fp);
}

//....................
int main(void){
    //...
    struct node *head = NULL;
    //...
    ReadData(&head);
    //...
}
