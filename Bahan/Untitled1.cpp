#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

main(){
	//ofstream out("data.txt",ios::out);
	ifstream in("data.txt");
	char a;
	cin.get(in, a);
	cout<<a;
}
