// C++ implementation to insert a node after 
// the n-th node from the end 
#include <bits/stdc++.h> 
using namespace std; 
  
// structure of a node 
struct Node { 
    int data; 
    Node* next; 
}; 
  
// function to get a new node 
Node* getNode(int data) 
{ 
    // allocate memory for the node 
    Node* newNode = (Node*)malloc(sizeof(Node)); 
  
    // put in the data 
    newNode->data = data; 
    newNode->next = NULL; 
    return newNode; 
} 
  
// function to insert a node after the 
// nth node from the end 
void insertAfterNthNode(Node* head, int n, int x) 
{ 
    // if list is empty 
    if (head == NULL) 
        return; 
  
    // get a new node for the value 'x' 
    Node* newNode = getNode(x); 
    Node* ptr = head; 
    int len = 0, i; 
  
    // find length of the list, i.e, the 
    // number of nodes in the list 
    while (ptr != NULL) { 
        len++; 
        ptr = ptr->next; 
    } 
  
    // traverse up to the nth node from the end 
    ptr = head; 
    for (i = 1; i <= (len - n); i++) 
        ptr = ptr->next; 
  
    // insert the 'newNode' by making the 
    // necessary adjustment in the links 
    newNode->next = ptr->next; 
    ptr->next = newNode; 
} 
  
// function to print the list 
void printList(Node* head) 
{ 
    while (head != NULL) { 
        cout << head->data << " "; 
        head = head->next; 
    } 
} 
  
// Driver program to test above 
int main() 
{ 
    // Creating list 1->3->4->5 
    Node* head = getNode(1); 
    head->next = getNode(3); 
    head->next->next = getNode(4); 
    head->next->next->next = getNode(5); 
  
    int n = 1, x = 99; 
  
    cout << "Original Linked List: "; 
    printList(head); 
  
    insertAfterNthNode(head, n, x); 
  
    cout << "\nLinked List After Insertion: "; 
    printList(head); 
  
    return 0; 
} 
