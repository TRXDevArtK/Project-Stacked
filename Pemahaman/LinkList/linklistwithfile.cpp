#include <iostream>
#include <fstream>
using namespace std;

struct node{
    int val;
    node *next = NULL;
};

void add(node *&head, int val){
    node *newPtr = new node;
    if(head==NULL){
        newPtr->val = val;
        head = newPtr;
    }
    else{
        newPtr->val = val;
        newPtr->next = head;
        head = newPtr;
    }
}

void print(node *head){
    node *temp;
    char data[100];
    cin.getline(data,100);
    ifstream filin;
    filin.open("data.txt",ios::in);
    temp = head;
    
    
    while(filin.read((char*)&head, sizeof(head))){
    //	filin.read((char*)&head, sizeof(head));
    	filin>>data;
    	cout<<data;
    }
    cout<<endl;
}

int main(){

	up:
    node *head = NULL;
    int val;
    char data[100];
    ofstream filout;
    filout.open("data.txt",ios::app);
    cin.getline(data,100);

    while(true){
        cin>>val;
        if(val==0)
            break;
        else{
            add(head,val);
            filout.write((char*)&head, sizeof(head));
        }
    }

    //filin.read()
    //cout<<data;

    print(head);
    goto up;

}
