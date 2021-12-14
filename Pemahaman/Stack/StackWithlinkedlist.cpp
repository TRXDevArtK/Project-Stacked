#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h> 

struct StackNode 
{ 
	int data; 
	struct StackNode* next;
	struct StackNode* prev; 
}; 

struct StackNode *head = NULL;
struct StackNode *last = NULL;
struct StackNode *current = NULL;

struct StackNode* newNode(int data) 
{ 
	struct StackNode* stackNode = (struct StackNode*) malloc(sizeof(struct StackNode)); 
	stackNode->data = data; 
	stackNode->next = NULL; 
	return stackNode; 
} 

int isEmpty() 
{ 
	return !head; 
} 

void push(int data) 
{ 
	struct StackNode* stackNode = newNode(data); 
	stackNode->next = head; 
	head = stackNode; 
	printf("%d pushed to stack\n", data); 
} 

int pop() 
{ 
	if(isEmpty()) 
	return INT_MIN; 
	struct StackNode* temp = head; 
	head = (head)->next; 
	int popped = temp->data; 
	free(temp); 

	return popped; 
} 

int peek() 
{ 
	if (isEmpty()) 
		return INT_MIN; 
	return head->data; 
} 

int main() 
{ 
	struct StackNode* root = NULL; 

	push(10); 
	push(20); 
	push(30); 

	printf("%d popped from stack\n", pop()); 

	printf("Top element is %d\n", peek()); 

	return 0; 
} 

