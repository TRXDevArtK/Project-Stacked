#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <fstream>

using namespace std;

struct StackNode { 
	string data; 
	struct StackNode* next; 
	struct StackNode* prev; 
}; 

struct StackNode *head = NULL;
struct StackNode *last = NULL;
struct StackNode *current = NULL;

int getCount() 
{ 
    int count = 0;  // Initialize count 
    struct StackNode* current = head;  // Initialize current 
    while (current != NULL) 
    { 
        count++; 
        current = current->next; 
    } 
    return count; 
} 

typedef StackNode* EmployPtr;
void insertAtHead(string);

void insertAtHead(string first)
{
    EmployPtr tempPtr= new StackNode;

    tempPtr->data = first;
    tempPtr->next = head;
    head = tempPtr;
}

void insertorpush(string new_data) {
	struct StackNode* new_node = (struct StackNode*)malloc(sizeof(struct StackNode));
	new_node = new(StackNode);

	string s1,s2,s3,s4;
	ifstream in;
	in.open("payroll.txt",ios::in);
	string first, last;
    float salary, bonus, deduction;
	while(in>>first)
	{
    cout << "First :" << first <<endl; //<< ", " << last << ", " << salary << ", " << bonus << ", " << deduction <<endl;
    insertAtHead (first);
    getCount();
	}
	cout<<first;
	cin>>s1;
	//new_node->data = new_data;

	/* 3. Make next of new node as head and previous as NULL */
	new_node->next = head;
	new_node->prev = NULL;

	/* 4. change prev of head node to new node */
	if (head != NULL)
		 head->prev = new_node; 

	/* 5. move the head to point to the new node */
	head = new_node;
}

void printList() {
   struct StackNode *ptr = head;
   ofstream out;
   ifstream in;
   in.open("data.txt",ios::in);
   out.open("data.txt",ios::app);
   
    cout<<"[NULL] [TOP] <=> ";
	while(ptr != NULL){     
		cout<<ptr->data;
		out<<ptr->data<<endl;
		ptr = ptr->next;
		cout<<" <=> ";
	}
   
   cout<<"[DOWN] [NULL]\n";
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
	cout<<"8.Size Data"<<endl;
	cout<<"Masukkan Pilihan : ";
}

main(){
	int pil;
	string input,input1;
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
	else if(pil == 8){
		cout<<getCount();
	}
	
}
