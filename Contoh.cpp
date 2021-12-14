// libraries
#include <iostream>
using namespace std;


struct Item
{
  // declare variables
  Item* previous; // pointer
  char aChar;
  Item* next; // the link

}; // close struct

// ------------FIX------------
// So it is a Stack not a Queue 
	  
void push(Item** top, int aInt)
{
  int i;
  char aChar;
  
  for ( i = 0; i < aInt; i++)
  {
    cout << endl;
    cout << "Enter a Char. : ";
    cin >> aChar;

    Item *new_top = new Item;
    new_top->aChar = aChar;
    new_top->previous = 0;
    new_top->next = (*top);
    (*top)->previous = new_top;
    (*top) = new_top;
  } // close for

} // close push

void printList(const Item* h, int aInt)
{
  int i = 0;

  for (const Item* p = h; i < aInt; p = p->next)
  {
    cout << endl;
    cout << p->aChar << endl;
    i++;
  }

} // close void

Item* deleteList(Item* h)
{
  while(h)
  {
    Item* next = h->next;
    delete h;
    h = next;

  }

  return h; // equals 0

}

int main()
{
  Item* top = new Item; // dynamic memory allocation   
  Item* tail = top;
  top->previous = 0;	

  int i, aInt = 0;
  char aChar;

  cout << endl; 
  cout << "How many chars do you want to enter? : ";
  cin >> aInt;
  
  if (aInt > 0)
  {
    // function call 
    push(tail, aInt); // fill list 

  } // close if

  cout << "\nPrinted List: " << endl;
 
  // function call 
  printList(top, aInt); // print list  

  // set top = to the function value
  top = deleteList(top); // function call to deallocate memory

  // return value
  return 0;

} // close main 
