// A simple C program for traversal of a linked list 
#include<stdio.h> 
#include<stdlib.h> 
#include <iostream>
using namespace std;

struct Node 
{ 
int data; 
struct Node *next; 
}; 

struct Node* head = NULL; 
struct Node* second = NULL; 
struct Node* third = NULL; 

struct Node2
{ 
int data; 
struct Node2 *next; 
}; 

struct Node2* head2 = NULL; 
struct Node2* second2 = NULL; 
struct Node2* third2 = NULL; 

void printList(struct Node *n) { 
	while (n != NULL) 
	{ 
		printf(" %d ", n->data); 
		n = n->next; 
	} 
}

void printList2(struct Node2 *n) { 
	while (n != NULL) 
	{ 
		printf(" %d ", n->data); 
		n = n->next; 
	} 
}



int main() 
{ 
	
// allocate 3 nodes in the heap 
head = (struct Node*)malloc(sizeof(struct Node)); 
second = (struct Node*)malloc(sizeof(struct Node)); 
third = (struct Node*)malloc(sizeof(struct Node)); 
head2 = (struct Node2*)malloc(sizeof(struct Node2)); 
second2 = (struct Node2*)malloc(sizeof(struct Node2)); 
third2 = (struct Node2*)malloc(sizeof(struct Node2)); 

head->data = 1; //assign data in first node 
head->next = second; // Link first node with second 

second->data = 2; //assign data to second node 
second->next = third; 

third->data = 3; //assign data to third node 
third->next = head2->next; 

head2->data = head->data;
head2->next = NULL;
	
printList(head); 
cout<<endl;
printList2(head2); 

return 0; 
}

