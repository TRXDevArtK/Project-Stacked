#include <fstream>
#include <iostream>
using namespace std;

struct Employee
{
    string firstN;
    string lastN;
    float salary;
    float bonus;
    float deduction;

    Employee *link;
};

typedef Employee* EmployPtr;
void insertAtHead( EmployPtr&, string, string, float, float,float );
void insert( EmployPtr&, string, string, float, float,float );

int main()
{
    // Open file
    fstream in( "payroll.txt", ios::in );

    // Read and prints lines
    string first, last;
    float salary, bonus, deduction;

   EmployPtr head = new Employee;

while( in >> first >> last >> salary >> bonus >> deduction)
{
    cout << "First, last, salary, bonus, ded: " << first << ", " << last << ", " << salary << ", " << bonus << ", " << deduction <<endl;
    insertAtHead (head, first, last, salary, bonus, deduction);
}

    // Close file
    in.close();

    //EmployPtr head = new Employee;


 }

void insertAtHead(EmployPtr& head, string firstValue, string lastValue,
            float salaryValue, float bonusValue,float deductionValue)
{
    EmployPtr tempPtr= new Employee;

    tempPtr->firstN = firstValue;
    tempPtr->lastN = lastValue;
    tempPtr->salary = salaryValue;
    tempPtr->bonus = bonusValue;
    tempPtr->deduction = deductionValue;

    tempPtr->link = head;
    head = tempPtr;
}

void insert(EmployPtr& afterNode, string firstValue, string lastValue,
        float salaryValue, float bonusValue,float deductionValue)
{
    EmployPtr tempPtr= new Employee;


    tempPtr->firstN = firstValue;
    tempPtr->lastN = lastValue;
    tempPtr->salary = salaryValue;
    tempPtr->bonus = bonusValue;
    tempPtr->deduction = deductionValue;

    tempPtr->link = afterNode->link;
    afterNode->link = tempPtr;
}
