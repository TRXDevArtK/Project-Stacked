#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
using namespace std;

struct contact{
        int employeeId;
        char firstName[15];
        char lastName[15];
        char employeeAddress[40];
        char email[25];
        char department[25];
        float annualSalary;
        struct date
        {
            int day;
            int month;
            int year;
        }doj;
        struct contact *next;

   };

//linked list
struct contact *listHead;
// initializes the list with a head 
void initLinkList(){
// set head
listHead = (struct contact *)malloc(sizeof(struct contact));
listHead->next = NULL;
} // initLinkList

void main()
{
    initLinkList();
    struct contact *temp;
    temp = (struct contact*)malloc(sizeof(struct contact));
    temp = listHead;
    FILE *cfPtr;
    if ((cfPtr = fopen(FILENAME, READMODE)) == NULL){
    puts("File could not be opened");
    }
    else{
        fscanf(cfPtr, "%d %s %s %s %s %s %f %d %d %d",
            &temp->employeeId,
            &temp->firstName,
            &temp->lastName,
            &temp->employeeAddress,
            &temp->email,
            &temp->department,
            &temp->annualSalary,
            &temp->doj.day,
            &temp->doj.month,
            &temp->doj.year);

         while (feof == 0)
        {
           fscanf(cfPtr, "%d %s %s %s %s %s %f %d %d %d",
                &temp->employeeId,
                &temp->firstName,
                &temp->lastName,
                &temp->employeeAddress,
                &temp->email,
                &temp->department,
                &temp->annualSalary,
                &temp->doj.day,
                &temp->doj.month,
                &temp->doj.year);
                fflush(stdin);

             temp->next = temp;
            //listHead->next = temp;
            printf("HELP");
        }
       fclose(cfPtr);
    }
do{
    menu();
    switch (userChoice){
    case 1:
        add();
        userChoice = NULL;
        break;
    case 2:
        printNodes();
        userChoice = NULL;
        break;
    case 3:
        view();
        userChoice = NULL;
        break;
    }
} while (userChoice != -1);

printf("\n\n\n");
system("pause");
}
void printNodes()
{
    struct contact *temp;
    temp = (struct contact*)malloc(sizeof(struct contact));
    temp = listHead ;
    while (temp != NULL)
    {
        printf("\n\nEmployee id: %d", temp->employeeId); // show the data
        printf("\n\nEmployee First Name: %s", temp->firstName);
        printf("\n\nEmployee Last Name: %s", temp->lastName);
        printf("\n\nEmployee Adress: %s", temp->employeeAddress);
        printf("\n\nEmployee Email: %s", temp->email);
        printf("\n\nEmployee Department: %s", temp->department);
        printf("\n\nEmployee Start Date");
        printf("\n\n-------------------");
        printf("\n\nDay: %d", temp->doj.day);
        printf("\n\nMonth: %d", temp->doj.month);
        printf("\n\nYear: %d", temp->doj.year);
        temp = temp->next;
    }
}
