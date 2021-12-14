#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

struct StackNode { 
	int data; 
	struct StackNode* next; 
	struct StackNode* prev; 
}; 

struct StackNode *head = NULL;
struct StackNode *last = NULL;
struct StackNode *current = NULL;

void insertorpush(int new_data) {
	struct StackNode* new_node = (struct StackNode*)malloc(sizeof(struct StackNode));

	new_node->data = new_data;

	/* 3. Make next of new node as head and previous as NULL */
	new_node->next = head;
	new_node->prev = NULL; 

	/* 4. change prev of head node to new node */
	if (head != NULL) 
		 head->prev = new_node; 

	/* 5. move the head to point to the new node */
	head = new_node; 
}

void insertLast(int new_data){ 
    /* 1. allocate node */
    struct StackNode* new_node = (struct StackNode*)malloc(sizeof(struct StackNode)); 
    struct StackNode* last = head; /* used in step 5*/
    
    new_node->data = new_data; 
    new_node->next = NULL; 
  
    if (head == NULL) { 
        new_node->prev = NULL; 
        head = new_node; 
        return; 
    } 
  
    /* 5. Else traverse till the last node */
    while (last->next != NULL) 
        last = last->next; 
  
    /* 6. Change the next of last node */
    last->next = new_node; 
  
    /* 7. Make last node as previous of new node */
    new_node->prev = last; 
  
    return; 
} 

void printList() {
   struct StackNode *ptr = head;
   
    cout<<"[NULL] [TOP] <=> ";

	while(ptr != NULL) {     
		cout<<ptr->data;
		ptr = ptr->next;
		cout<<" <=> ";
	}
   
   cout<<"[DOWN] [NULL]\n";
}

void insertAfter(int pos, int new_data) 
{
	if(head == NULL) { 
		printf("the given previous node cannot be NULL"); 
		return; 
	} 
	
    struct StackNode* new_node = (struct StackNode*)malloc(sizeof(struct StackNode)); 
    new_node->data = new_data;
    new_node->next = NULL;
    StackNode* ptr = head; 
    int len = 0, i; 
    
    while (ptr != NULL) { 
        len++; 
        ptr = ptr->next; 
    }

	// traverse up to the nth node from the end 
    ptr = head; 
    for (i = 0; i < pos - 1; i++) 
        ptr = ptr->next; 
  
    // insert the 'newStackNode' by making the 
    // necessary adjustment in the links 
    new_node->next = ptr->next; 
    ptr->next = new_node; 
}

void remove_dataorpop() 
{ 
	if(head == NULL) {
		cout<<"Node Sebelumnya Tidak Boleh NULL/TIDAK ADA";
		return; 
	} 
	struct StackNode* temp = head; 
	head = (head)->next; 
	int popped = temp->data; 
	free(temp); 
}

void remove_data(int data) {
   int pos = 0;
   struct StackNode *pre_node;
    
   if(head==NULL) {
      printf("Linked List not initialized");
      return;
   } 
    
   if(head->data == data) {
      if(head->next != NULL) {
         head->next->prev = NULL;
         head = head->next;
         return;
      } else {
         head = NULL;
         printf("List is empty now");
         return;
      }
   } else if(head->data != data && head->next == NULL) {
      printf("%d not found in the list\n", data);
      return;
   }

   current = head;
   
   while(current->next != NULL && current->data != data) {
      pre_node = current;
      current = current->next;
   }        

   if(current->data == data) {
      pre_node->next = pre_node->next->next;
            
      if(pre_node->next != NULL) {          // link back
         pre_node->next->prev = pre_node;
      } else
         last = pre_node;

      free(current);
   } else
      printf("%d not found in the list.", data);

}

void remove_all() { 
/* deref head_ref to get the real head */
struct StackNode* current = head; 
struct StackNode* next; 

while (current != NULL) 
{ 
	next = current->next; 
	free(current); 
	current = next; 
} 
	
/* deref head_ref to affect the real head back 
	in the caller. */
head = NULL; 
} 

void update_data(int old, int newd){
   int pos = 0;
   
   if(head == NULL) {
      printf("Linked List not initialized");
      return;
   } 

   current = head;
   while(current!=NULL) {
      pos++;
      
      if(current->data == old) {
         current->data = newd;
         printf("\n%d found at position %d, replaced with %d\n", old, pos, newd);
         return;
      }

      if(current->next != NULL)
         current = current->next;
      else
         break;
   }
   printf("%d does not exist in the list\n", old);
}

void menus(){
	cout<<"==========MENU=========="<<endl;
	cout<<"1.Insert Data (Push)"<<endl;
	cout<<"2.Insert Data From Last StackNode"<<endl;
	cout<<"3.Insert Data After StackNode in [Index]"<<endl;
	cout<<"4.Remove Data (Choice)"<<endl;
	cout<<"5.Remove Data (ALL)"<<endl;
	cout<<"6.Remove Data (Pop)"<<endl;
	cout<<"7.Update Data"<<endl;
	cout<<"Masukkan Pilihan : ";
}

main(){
	int pil,input,input2;
	menu:
	printList();
	cout<<endl;
	menus();cin>>pil;
	if(pil == 1){
		cout<<endl;
		cout<<"Masukkan data yang akan diinput : ";cin>>input;
		insertorpush(input);
		system("cls");
		goto menu;
	}
	
	else if(pil == 2){
		cout<<endl;
		cout<<"Masukkan data yang akan diinput : ";cin>>input;
		insertLast(input);
		system("cls");
		goto menu;
	}
	
	else if(pil == 3){
		cout<<endl;
		cout<<"Masukkan posisi [Index] setelah yang akan diinput : ";cin>>input2;
		cout<<"Masukkan data yang akan diinput : ";cin>>input;
		insertAfter(input2,input);
		system("cls");
		goto menu;
	}
	
	else if(pil == 4){
		cout<<endl;
		cout<<"Masukkan data yang akan didelete : ";cin>>input;
		remove_data(input);
		system("cls");
		goto menu;
	}
	
	else if(pil == 5){
		cout<<endl;
		remove_all();
		system("cls");
		goto menu;
	}
	
	else if(pil == 6){
		cout<<endl;
		remove_dataorpop();
		system("cls");
		goto menu;
	}
	
	else if(pil == 7){
		cout<<endl;
		cout<<"Masukkan data yang akan di replace/update : ";cin>>input2;
		cout<<"Masukkan data yang akan diinput : ";cin>>input;
		update_data(input2,input);
		system("cls");
		goto menu;
	}
}
